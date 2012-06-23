#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "newclient.h"
#include "workwc.h"
#include "carback.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

protected:
	void changeEvent(QEvent *e);

private slots:
	void newClientButton();
	void carSearchButton();
	void clientSearchButton();
	void carBackButton();
	void reportsButton();
	void acidentsButton();

private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
