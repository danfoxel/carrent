#ifndef CARBACK_H
#define CARBACK_H

#include <QtGui/QDialog>

namespace Ui {
class CarBack;
}

class CarBack : public QDialog
{
	Q_OBJECT

public:
	explicit CarBack(QWidget *parent = 0);
	~CarBack();
	void addData();

protected:
	void changeEvent(QEvent *e);

private slots:
	void on_lineEdit_textChanged(const QString &arg1);
	void acceptData();
	void on_tableWidget_cellActivated(int row, int column);
	void cancelButton();

private:
	Ui::CarBack *ui;
};

#endif // CARBACK_H
