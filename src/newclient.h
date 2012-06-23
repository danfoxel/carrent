#ifndef NEWCLIENT_H
#define NEWCLIENT_H

#include <QtGui/QDialog>
#include <QString>



namespace Ui {
class newClient;
}



class newClient : public QDialog
{
	Q_OBJECT

public:
	explicit newClient(QWidget *parent = 0);
	~newClient();

protected:
	void changeEvent(QEvent *e);

private slots:
	void nextTab();
	void addData();
	void doubleClickOnCar(int row, int column);

	void acceptData();

private:
	Ui::newClient *ui;
};

#endif // NEWCLIENT_H
