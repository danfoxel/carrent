#include "wwithcars.h"
#include "carback.h"
#include "ui_carback.h"

CarBack::CarBack(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::CarBack)
{
	ui->setupUi(this);
	WWithCars *temp;
	temp->listFromFile ();
}

CarBack::~CarBack()
{
	delete ui;
}

void CarBack::changeEvent(QEvent *e)
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
