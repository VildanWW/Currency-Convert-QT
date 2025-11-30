/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QFrame *frameTools;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelCount;
    QLineEdit *lineEditMoney;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_3;
    QComboBox *comboFrom;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_4;
    QComboBox *comboTo;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelResult;
    QLabel *labelMoney;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(746, 679);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_7 = new QHBoxLayout(centralwidget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        frameTools = new QFrame(centralwidget);
        frameTools->setObjectName("frameTools");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameTools->sizePolicy().hasHeightForWidth());
        frameTools->setSizePolicy(sizePolicy);
        frameTools->setFrameShape(QFrame::Shape::StyledPanel);
        frameTools->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_6 = new QHBoxLayout(frameTools);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton = new QPushButton(frameTools);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        font.setKerning(true);
        pushButton->setFont(font);

        horizontalLayout_6->addWidget(pushButton);

        pushButton_2 = new QPushButton(frameTools);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        pushButton_2->setFont(font1);

        horizontalLayout_6->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frameTools);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font1);

        horizontalLayout_6->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frameTools);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font1);

        horizontalLayout_6->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(frameTools);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font1);

        horizontalLayout_6->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(frameTools);
        pushButton_6->setObjectName("pushButton_6");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("#5e3f5a"));

        horizontalLayout_6->addWidget(pushButton_6);


        verticalLayout_2->addWidget(frameTools);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, -1, 63, -1);
        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        labelCount = new QLabel(centralwidget);
        labelCount->setObjectName("labelCount");
        labelCount->setEnabled(true);
        sizePolicy2.setHeightForWidth(labelCount->sizePolicy().hasHeightForWidth());
        labelCount->setSizePolicy(sizePolicy2);
        labelCount->setMinimumSize(QSize(66, 1));
        labelCount->setMaximumSize(QSize(1, 750));
        QFont font2;
        font2.setPointSize(14);
        labelCount->setFont(font2);
        labelCount->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"color: rgb(255, 41, 127);"));

        horizontalLayout_3->addWidget(labelCount);

        lineEditMoney = new QLineEdit(centralwidget);
        lineEditMoney->setObjectName("lineEditMoney");
        lineEditMoney->setEnabled(true);
        sizePolicy2.setHeightForWidth(lineEditMoney->sizePolicy().hasHeightForWidth());
        lineEditMoney->setSizePolicy(sizePolicy2);
        lineEditMoney->setMinimumSize(QSize(20, 0));
        lineEditMoney->setMaximumSize(QSize(4000, 22));
        lineEditMoney->setFont(font1);
        lineEditMoney->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));

        horizontalLayout_3->addWidget(lineEditMoney);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        comboFrom = new QComboBox(centralwidget);
        comboFrom->setObjectName("comboFrom");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboFrom->sizePolicy().hasHeightForWidth());
        comboFrom->setSizePolicy(sizePolicy3);
        comboFrom->setFont(font1);

        gridLayout_3->addWidget(comboFrom, 0, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(186, 153, 255);"));

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        comboTo = new QComboBox(centralwidget);
        comboTo->setObjectName("comboTo");
        sizePolicy3.setHeightForWidth(comboTo->sizePolicy().hasHeightForWidth());
        comboTo->setSizePolicy(sizePolicy3);
        comboTo->setFont(font1);

        gridLayout_4->addWidget(comboTo, 0, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(186, 153, 255);"));

        gridLayout_4->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 3, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_4);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(9);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName("labelResult");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelResult->sizePolicy().hasHeightForWidth());
        labelResult->setSizePolicy(sizePolicy4);
        labelResult->setMinimumSize(QSize(0, 0));
        labelResult->setFont(font2);
        labelResult->setStyleSheet(QString::fromUtf8("color: #FFFFFF;\n"
"color: rgb(255, 41, 127);"));

        horizontalLayout_5->addWidget(labelResult);

        labelMoney = new QLabel(centralwidget);
        labelMoney->setObjectName("labelMoney");
        sizePolicy3.setHeightForWidth(labelMoney->sizePolicy().hasHeightForWidth());
        labelMoney->setSizePolicy(sizePolicy3);
        labelMoney->setMinimumSize(QSize(260, 0));

        horizontalLayout_5->addWidget(labelMoney);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 5, -1, -1);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setMinimumSize(QSize(0, 240));
        frame->setBaseSize(QSize(0, 0));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setMinimumSize(QSize(0, 240));
        frame_2->setBaseSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);

        horizontalLayout->addWidget(frame_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 150, -1, -1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_7->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 746, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\264\320\265\321\200\320\266\320\272\320\260", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        labelCount->setText(QCoreApplication::translate("MainWindow", "Count:", nullptr));
        lineEditMoney->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "From", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "To", nullptr));
        labelResult->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        labelMoney->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\225\320\232\320\233\320\220\320\234\320\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
