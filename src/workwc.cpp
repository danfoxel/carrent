#include <QDebug>

#include <functional>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "workwc.h"
#include "ui_workwc.h"


WorkWC::WorkWC(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::WorkWC)
{
	ui->setupUi(this);
}

WorkWC::~WorkWC()
{
	delete ui;
}


void WorkWC::changeEvent(QEvent *e)
{
	QDialog::changeEvent(e);
	switch (e->type()) {
	case QEvent::LanguageChange:
		ui->retranslateUi(this);
		break;
	default:
		break;
	}
}

