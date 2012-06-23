#include "carchange.h"
#include "carback.h"
#include "ui_carback.h"

CarBack::CarBack(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::CarBack)
{
	ui->setupUi(this);

	int sizeHandler=listOfCars.size ();
	ui->tableWidget->setRowCount(sizeHandler);
	ui->tableWidget->setColumnCount(4);
	QStringList labels;
	labels << "Car goverment number" << "Driver license number" << "Date In" << "Date out";
	ui->tableWidget->setHorizontalHeaderLabels (labels);
	addData ();
	ui->tableWidget->resizeColumnsToContents ();
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

void CarBack::addData()
{
	CarChange *temp;
	temp->listFromFile ();

	int sizeHandler=listOfCars.size ();
	for(int i=0;i<sizeHandler;i++)
	{
		ui->tableWidget->setItem (i,0,new QTableWidgetItem(listOfCars[i].carNumber));
		ui->tableWidget->setItem (i,1,new QTableWidgetItem(listOfCars[i].driverLicNumber));
		ui->tableWidget->setItem (i,2,new QTableWidgetItem(listOfCars[i].dateIn));
		ui->tableWidget->setItem (i,3,new QTableWidgetItem(listOfCars[i].dateOut));
	}
}

void CarBack::on_lineEdit_textChanged(const QString &arg1)
{
	if (ui->lineEdit->text()== arg1)
	{
		ui->tableWidget->setCurrentCell(0,0);
		ui->tableWidget->clearSelection();
		return;
	}

	QTableWidgetItem *item;
	QList<QTableWidgetItem*> found = ui->tableWidget->findItems(ui->lineEdit->text(), Qt::MatchContains);

	 foreach (item, found)
	 {
		if (item->column()==0) //подсвечиваем 0-й столбец
		{
		ui->tableWidget->clearSelection();
		ui->tableWidget->setItemSelected(item, true);
		ui->tableWidget->setCurrentCell(item->row(),item->column());
		break;
		}
	 }
}
