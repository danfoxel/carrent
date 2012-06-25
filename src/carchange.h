#ifndef CARCHANGE_H
#define CARCHANGE_H
#include <QtCore/QList>
#include <QtCore>
#include <string>
#include "avltree.h"

struct dataHandler
{
	QString driverLicNumber;
	QString carNumber;
	QString dateOut;
	QString dateIn;
};

extern QList<dataHandler> listOfCars;
extern dataHandler st;

using std::string;

class CarChange:public AvlTree <Car>
{
public:
	CarChange();
	void listToFile();
	void listFromFile();
};

#endif // CARCHANGE_H
