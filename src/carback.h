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
	
protected:
	void changeEvent(QEvent *e);
	
private:
	Ui::CarBack *ui;
};

#endif // CARBACK_H
