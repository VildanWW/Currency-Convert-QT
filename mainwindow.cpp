#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QDate>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QDateTimeAxis>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->lineEditMoney, &QLineEdit::returnPressed, this, &MainWindow::onInputEntered);
    connect(&dm, &DataManager::dataReady, this, &MainWindow::onDataReady);
    connect(ui->comboFrom, &QComboBox::currentTextChanged, this, &MainWindow::buildGraph);
    connect(ui->comboTo, &QComboBox::currentTextChanged, this, &MainWindow::buildGraph);

    loadInitializationData();
}


MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::loadInitializationData() {
    QDate today = QDate::currentDate();

    for(int i=0;i<7;i++) {
        QDate date = today.addDays(-i);
        QString url = "http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + date.toString("dd/MM/yyyy");
        dm.fetchData(url, date);
    }
}

void MainWindow::onDataReady(const std::pair<QDate, QMap<QString, double>>& receivedData)
{
    std::lock_guard<std::mutex> lock(historyMutex);

    qDebug() << "=== Data received ===";
    qDebug() << "Date:" << receivedData.first.toString("dd.MM.yyyy");
    qDebug() << "Currencies count:" << receivedData.second.size();

    for (auto it = receivedData.second.begin(); it != receivedData.second.end(); ++it) {
        qDebug().noquote() << it.key() << "=" << it.value();
    }

    qDebug() << "=====================";

    history.push_back(receivedData);
    countDowloadsDays++;

    if (countDowloadsDays == 7) {
        std::sort(history.begin(), history.end(),
                  [](const std::pair<QDate, QMap<QString, double>>& a,
                     const std::pair<QDate, QMap<QString, double>>& b) {
                      return a.first < b.first;
                  });
        setItemsOnGui();
    }
}

void MainWindow::onInputEntered() {
    QString fromCurrency = ui->comboFrom->currentText();
    QString toCurrency = ui->comboTo->currentText();

    inputMoney = ui->lineEditMoney->text().toDouble();

    QMap<QString, double> lastRates;
    {
        std::lock_guard<std::mutex> lock(historyMutex);
        lastRates = history.back().second;
    }


    if (lastRates.contains(fromCurrency) && lastRates.contains(toCurrency)) {
        double converted = inputMoney * (lastRates[toCurrency] / lastRates[fromCurrency]);
        ui->labelMoney->setText(QString::number(converted, 'f', 2));
    }

    if (!ui->comboFrom->currentText().isEmpty() && !ui->comboTo->currentText().isEmpty()) {
        buildGraph();
    }
}

void MainWindow::setItemsOnGui() {
    QDate today = QDate::currentDate();

    for(const auto& item : history) {
        QDate date = item.first;
        const QMap<QString, double>& rates = item.second;

        if(date == today) {
            for(const QString& key : rates.keys()) {
                ui->comboFrom->addItem(key);
                ui->comboTo->addItem(key);
            }
            break;
        }
    }
}

void MainWindow::buildGraph() {
    QString currencyOne = ui->comboFrom->currentText();
    QString currencyTwo = ui->comboTo->currentText();

    if (currencyOne.isEmpty() || currencyTwo.isEmpty()) {
        return;
    }

    QLineSeries *seriesOne = new QLineSeries();
    seriesOne->setName(currencyOne);

    QLineSeries *seriesTwo = new QLineSeries();
    seriesTwo->setName(currencyTwo);

    for(auto& entry : history) {
        QDate date = entry.first;
        QMap<QString, double> r = entry.second;
        QDateTime dt(date, QTime(0, 0));
        qreal x = dt.toMSecsSinceEpoch();

        if(r.contains(currencyOne)) {
            seriesOne->append(x, r[currencyOne]);
        }

        if (r.contains(currencyTwo)) {
            seriesTwo->append(x, r[currencyTwo]);
        }
    }

    // Непосредственно рисуем график для первой валюты
    QChart* chartOne = new QChart();
    chartOne->addSeries(seriesOne);
    chartOne->setTitle("Course " + currencyOne);

    QDateTimeAxis* axisX1 = new QDateTimeAxis;
    axisX1->setFormat("dd.MM");
    axisX1->setTitleText("Date");
    chartOne->addAxis(axisX1, Qt::AlignBottom);
    seriesOne->attachAxis(axisX1);

    QValueAxis* axisY1 = new QValueAxis;
    axisY1->setTitleText("Course");
    chartOne->addAxis(axisY1, Qt::AlignLeft);
    seriesOne->attachAxis(axisY1);

    QChartView* chartView1 = new QChartView(chartOne);
    chartView1->setRenderHint(QPainter::Antialiasing);

    if (!ui->frame->layout()) {
        ui->frame->setLayout(new QVBoxLayout());
    }

    QLayout* layout1 = ui->frame->layout();
    QLayoutItem* oldItem1;

    while ((oldItem1=layout1->takeAt(0)) != nullptr) {
        if (oldItem1->widget()) {
            delete oldItem1->widget();
            delete oldItem1;
        }
    }
    layout1->addWidget(chartView1);

    // Непосредственно рисуем график для второй валюты
    QChart* chart2 = new QChart();
    chart2->addSeries(seriesTwo);
    chart2->setTitle("Course "+ currencyTwo);

    QDateTimeAxis* axisX2 = new QDateTimeAxis;
    axisX2->setFormat("dd.MM");
    axisX2->setTitleText("Data");
    chart2->addAxis(axisX2, Qt::AlignBottom);
    seriesTwo->attachAxis(axisX2);

    QValueAxis* axisY2 = new QValueAxis;
    axisY2->setTitleText("Course");
    chart2->addAxis(axisY2, Qt::AlignLeft);
    seriesTwo->attachAxis(axisY2);

    QChartView* chartView2 = new QChartView(chart2);
    chartView2->setRenderHint(QPainter::Antialiasing);

    if (!ui->frame_2->layout())
        ui->frame_2->setLayout(new QVBoxLayout());

    QLayout* layout2 = ui->frame_2->layout();
    QLayoutItem* oldItem2;
    while ((oldItem2 = layout2->takeAt(0)) != nullptr) {
        if (oldItem2->widget()) delete oldItem2->widget();
        delete oldItem2;
    }
    layout2->addWidget(chartView2);
}

