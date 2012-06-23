#ifndef WORKINGWH_H
#define WORKINGWH_H
#include <QtCore>

struct carMass
{
	QString number;
	QString model;
	QString color;
	int year;
	bool inSale;
	bool isFull;
};

extern QVector<carMass> vCarMass;

class WorkingWH
{
public:
	WorkingWH();
	const int findKey(QString number);
	void carsToFile();
	void carsFromFile();
};

#endif // WORKINGWH_H
