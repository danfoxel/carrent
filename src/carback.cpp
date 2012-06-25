#include <QMessageBox>

#include "carback.h"
#include "ui_carback.h"

int handler;

CarBack::CarBack(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::CarBack)
{
	ui->setupUi(this);
	connect (ui->pushButton, SIGNAL (clicked()),SLOT (acceptData()));
	connect (ui->pushButton_2, SIGNAL (clicked()),SLOT (cancelButton()));

	CarChange *temp;
	temp->listFromFile ();

	//qDebug ()<<listOfCars.size ();
	ui->tableWidget->setRowCount(listOfCars.size ());
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
	for(int i=0;i<(listOfCars.size ());i++)
	{
		ui->tableWidget->setItem (i,0,new QTableWidgetItem(listOfCars[i].carNumber));
		ui->tableWidget->setItem (i,1,new QTableWidgetItem(listOfCars[i].driverLicNumber));
		ui->tableWidget->setItem (i,2,new QTableWidgetItem(listOfCars[i].dateIn));
		ui->tableWidget->setItem (i,3,new QTableWidgetItem(listOfCars[i].dateOut));
	}
}

void CarBack::on_lineEdit_textChanged(const QString &arg1)
{
	if (ui->lineEdit->text()== "")
	{
		ui->tableWidget->setCurrentCell(0,0);
		ui->tableWidget->clearSelection();
		return;
	}

	QTableWidgetItem *item;
	QList<QTableWidgetItem*> found = ui->tableWidget->findItems(ui->lineEdit->text(), Qt::MatchContains);

	 foreach (item, found)
	 {
		switch (item->column())
		{
		case 0:
		{
		ui->tableWidget->clearSelection();
		ui->tableWidget->setItemSelected(item, true);
		ui->tableWidget->setCurrentCell(item->row(),item->column());
		break;
		}
		case 1:
		{
			ui->tableWidget->clearSelection();
			ui->tableWidget->setItemSelected(item, true);
			ui->tableWidget->setCurrentCell(item->row(),item->column());
			break;
		}
		case 2:
		{
			ui->tableWidget->clearSelection();
			ui->tableWidget->setItemSelected(item, true);
			ui->tableWidget->setCurrentCell(item->row(),item->column());
			break;
		}
		case 3:
		{
			ui->tableWidget->clearSelection();
			ui->tableWidget->setItemSelected(item, true);
			ui->tableWidget->setCurrentCell(item->row(),item->column());
			break;
		}
		}
	 }
}

void CarBack::acceptData()
{
	if (ui->label_3->text () == "")
	{
		QMessageBox::information(0, "Attention!", "Please, select car!");
	}else	{
		listOfCars.removeAt (handler);
		CarChange *temp;
		temp->listToFile ();
		QMessageBox::information(0, "Attention!", "This car is free now. Client need to pay some money!");
		listOfCars.clear ();
		CarBack::accept ();
	}

}

void CarBack::on_tableWidget_cellActivated(int row, int column)
{
	QString temps=listOfCars[row].carNumber;
	handler=row;
	ui->label_3->setText (temps);
}

void CarBack::cancelButton()
{
	listOfCars.clear ();
	CarBack::reject ();
}
