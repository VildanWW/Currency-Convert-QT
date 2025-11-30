#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <datamanager.h>
#include <QMainWindow>
#include <QDate>
#include <QVector>
#include <mutex>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();
public slots:
    void onInputEntered();
    void onDataReady(const std::pair<QDate, QMap<QString, double>>& receivedData);
private:
    Ui::MainWindow* ui;
    DataManager dm;

    std::mutex historyMutex;
    size_t countDowloadsDays = 0;

    double inputMoney;
    QVector<std::pair<QDate, QMap<QString, double>>> history;
private:
    void loadInitializationData();
    void setItemsOnGui();
    void buildGraph();
};
#endif // MAINWINDOW_H
