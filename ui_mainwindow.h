/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 24. Jun 00:44:41 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_client;
    QAction *actionCar_search;
    QAction *actionCar_back;
    QAction *actionClient_search;
    QAction *actionReports;
    QAction *actionAcidents_Bill;
    QAction *actionReconnect_to_base;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QMenu *menuActions;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(601, 437);
        actionNew_client = new QAction(MainWindow);
        actionNew_client->setObjectName(QString::fromUtf8("actionNew_client"));
        actionCar_search = new QAction(MainWindow);
        actionCar_search->setObjectName(QString::fromUtf8("actionCar_search"));
        actionCar_back = new QAction(MainWindow);
        actionCar_back->setObjectName(QString::fromUtf8("actionCar_back"));
        actionClient_search = new QAction(MainWindow);
        actionClient_search->setObjectName(QString::fromUtf8("actionClient_search"));
        actionReports = new QAction(MainWindow);
        actionReports->setObjectName(QString::fromUtf8("actionReports"));
        actionAcidents_Bill = new QAction(MainWindow);
        actionAcidents_Bill->setObjectName(QString::fromUtf8("actionAcidents_Bill"));
        actionReconnect_to_base = new QAction(MainWindow);
        actionReconnect_to_base->setObjectName(QString::fromUtf8("actionReconnect_to_base"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(200, 100));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(200, 100));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(200, 100));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(200, 100));

        gridLayout->addWidget(pushButton_5, 5, 0, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(200, 100));

        gridLayout->addWidget(pushButton_6, 5, 1, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(200, 100));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 20));
        menuActions = new QMenu(menuBar);
        menuActions->setObjectName(QString::fromUtf8("menuActions"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuActions->menuAction());
        menuActions->addAction(actionNew_client);
        menuActions->addAction(actionCar_search);
        menuActions->addAction(actionCar_back);
        menuActions->addAction(actionClient_search);
        menuActions->addAction(actionReports);
        menuActions->addAction(actionAcidents_Bill);
        menuActions->addSeparator();
        menuActions->addAction(actionReconnect_to_base);
        menuActions->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CarRent", 0, QApplication::UnicodeUTF8));
        actionNew_client->setText(QApplication::translate("MainWindow", "New client", 0, QApplication::UnicodeUTF8));
        actionCar_search->setText(QApplication::translate("MainWindow", "Car search", 0, QApplication::UnicodeUTF8));
        actionCar_back->setText(QApplication::translate("MainWindow", "Car back", 0, QApplication::UnicodeUTF8));
        actionClient_search->setText(QApplication::translate("MainWindow", "Client search", 0, QApplication::UnicodeUTF8));
        actionReports->setText(QApplication::translate("MainWindow", "Reports", 0, QApplication::UnicodeUTF8));
        actionAcidents_Bill->setText(QApplication::translate("MainWindow", "Acidents, Bills", 0, QApplication::UnicodeUTF8));
        actionReconnect_to_base->setText(QApplication::translate("MainWindow", "Reconnect to base", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "New client", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Car search", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Client search", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "Reports", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "Accidents, Bills", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Car back", 0, QApplication::UnicodeUTF8));
        menuActions->setTitle(QApplication::translate("MainWindow", "Actions", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
