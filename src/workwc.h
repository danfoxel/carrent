#ifndef WORKWC_H
#define WORKWC_H

#include <QtGui/QDialog>

namespace Ui {
class WorkWC;
}

class WorkWC : public QDialog
{
	Q_OBJECT

public:
	explicit WorkWC(QWidget *parent = 0);
	~WorkWC();
	int testtree();

protected:
	void changeEvent(QEvent *e);

private:
	Ui::WorkWC *ui;
};

#endif // WORKWC_H
