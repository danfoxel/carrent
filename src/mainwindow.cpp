#include <QtCore/QDebug>
#include <QtGui/QDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	connect (ui->pushButton, SIGNAL (clicked()), SLOT (newClientButton()));
	connect (ui->pushButton_2, SIGNAL (clicked()), SLOT (carSearchButton()));
	connect (ui->pushButton_3, SIGNAL (clicked()), SLOT (clientSearchButton()));
	connect (ui->pushButton_4, SIGNAL (clicked()), SLOT (carBackButton()));
	connect (ui->pushButton_5, SIGNAL (clicked()), SLOT (reportsButton()));
	connect (ui->pushButton_6, SIGNAL (clicked()), SLOT (acidentsButton()));
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
	QMainWindow::changeEvent(e);
	switch (e->type()) {
	case QEvent::LanguageChange:
		ui->retranslateUi(this);
		break;
	default:
		break;
	}
}

void MainWindow::newClientButton()
{
	newClient dialog(this);
	if (dialog.exec ()!=QDialog::Accepted)
		return;
}
void MainWindow::carSearchButton()
{
	qDebug ()<<"carSearchButton";

}

void MainWindow::clientSearchButton ()
{
	WorkWC dialog(this);
	if (dialog.exec ()!=QDialog::Accepted)
		return;
}

void MainWindow::carBackButton()
{
	CarBack dialog(this);
	if (dialog.exec ()!=QDialog::Accepted)
		return;
}

void MainWindow::reportsButton()
{
	qDebug ()<<"reportsButton";

}

void MainWindow::acidentsButton ()
{
	qDebug ()<<"acidentsButton";

}
