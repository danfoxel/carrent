#include <QDebug>
#include <QLineEdit>

#include "wwithcars.h"
#include "workingwh.h"
#include "newclient.h"
#include "ui_newclient.h"

int rowHandler;

newClient::newClient(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::newClient)
{
	ui->setupUi(this);
	connect (ui->pushButton_4, SIGNAL (clicked()),SLOT (nextTab()));
	connect (ui->tableWidget, SIGNAL (cellDoubleClicked(int,int)),SLOT (doubleClickOnCar(int,int)));
	connect (ui->pushButton, SIGNAL (clicked()),SLOT (acceptData()));

	WorkingWH *temp;
	temp->carsFromFile();

	int count=0;
	for (int i=0;i<1000;i++)
	{
		if (vCarMass[i].isFull)
			count++;
	}

	ui->lineEdit->setInputMask ("99>AA999999");
	ui->lineEdit_3->setInputMask ("9999 999999 00-00-0000 XXXXXXXXXXXXXXX");

	ui->tableWidget->setRowCount(count);
	ui->tableWidget->setColumnCount(4);
	QStringList labels;
	labels << "Car goverment number" << "Car model" << "Car color" << "Year";
	ui->tableWidget->setHorizontalHeaderLabels (labels);
	addData ();
	ui->tableWidget->resizeColumnsToContents ();
}

newClient::~newClient()
{
	delete ui;
}

void newClient::addData()
{
	QString tempNumber="С123ОР-12";

	WorkingWH *temp;
	qDebug()<<temp->findKey(tempNumber);
	//temp->carsToFile();

	for(int i=0;i<1000;i++)
	{
		if (!vCarMass[i].isFull)
			break;
		QString str;
		str.setNum (vCarMass[i].year);
		ui->tableWidget->setItem (i,0,new QTableWidgetItem(vCarMass[i].number));
		ui->tableWidget->setItem (i,1,new QTableWidgetItem(vCarMass[i].model));
		ui->tableWidget->setItem (i,2,new QTableWidgetItem(vCarMass[i].color));
		ui->tableWidget->setItem (i,3,new QTableWidgetItem(str));
	}
}

void newClient::changeEvent(QEvent *e)
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

void newClient::nextTab()
{
	ui->toolBox->setCurrentIndex (1);
	ui->lineEdit->setFocus ();
}

void newClient::doubleClickOnCar(int row, int column)
{
	rowHandler=row;
	ui->label_6->setText (ui->tableWidget->item (row,0)->text ());
	ui->label_7->setText (ui->tableWidget->item (row,1)->text ());
	ui->label_8->setText (ui->tableWidget->item (row,2)->text ());
	nextTab ();
}

void newClient::acceptData()
{
	vCarMass[rowHandler].inSale=false; //записали что машина занята, убираем из списка
	//записываем данные клиента
	//записываем данные в список проката
}
