#ifndef CARCHANGE_H
#define CARCHANGE_H
#include <QtCore/QList>
#include <QtCore>

struct dataHandler
{
	QString driverLicNumber;
	QString carNumber;
	QString dateOut;
	QString dateIn;
};

extern QList<dataHandler> listOfCars;
extern dataHandler st;

class CarChange
{
public:
	CarChange();
	void listToFile();
	void listFromFile();
};

#endif // CARCHANGE_H
