/********************************************************************************
** Form generated from reading UI file 'workwc.ui'
**
** Created: Sun 24. Jun 00:44:41 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKWC_H
#define UI_WORKWC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_WorkWC
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WorkWC)
    {
        if (WorkWC->objectName().isEmpty())
            WorkWC->setObjectName(QString::fromUtf8("WorkWC"));
        WorkWC->resize(400, 300);
        buttonBox = new QDialogButtonBox(WorkWC);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(WorkWC);
        QObject::connect(buttonBox, SIGNAL(accepted()), WorkWC, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WorkWC, SLOT(reject()));

        QMetaObject::connectSlotsByName(WorkWC);
    } // setupUi

    void retranslateUi(QDialog *WorkWC)
    {
        WorkWC->setWindowTitle(QApplication::translate("WorkWC", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WorkWC: public Ui_WorkWC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWC_H
