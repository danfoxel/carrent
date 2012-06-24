/********************************************************************************
** Form generated from reading UI file 'carback.ui'
**
** Created: Sun 24. Jun 13:56:59 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARBACK_H
#define UI_CARBACK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CarBack
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *CarBack)
    {
        if (CarBack->objectName().isEmpty())
            CarBack->setObjectName(QString::fromUtf8("CarBack"));
        CarBack->resize(453, 450);
        gridLayout = new QGridLayout(CarBack);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(CarBack);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        lineEdit = new QLineEdit(CarBack);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 2);

        tableWidget = new QTableWidget(CarBack);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 4);

        label_2 = new QLabel(CarBack);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(CarBack);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(382, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        pushButton_2 = new QPushButton(CarBack);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 2);

        pushButton = new QPushButton(CarBack);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 3, 3, 1, 1);


        retranslateUi(CarBack);

        QMetaObject::connectSlotsByName(CarBack);
    } // setupUi

    void retranslateUi(QDialog *CarBack)
    {
        CarBack->setWindowTitle(QApplication::translate("CarBack", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CarBack", "Any data:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CarBack", "Selected car:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        pushButton_2->setText(QApplication::translate("CarBack", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CarBack", "Get car back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CarBack: public Ui_CarBack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARBACK_H
