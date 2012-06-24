#include "carchange.h"

QList<dataHandler> listOfCars;
dataHandler st;

CarChange::CarChange()
{
}
void CarChange::listToFile ()
{
	int sizeHandler=listOfCars.size ();
	QFile::remove ("listOfOrders.ini");
	QSettings settings("listOfOrders.ini",QSettings::IniFormat); //создали файл с настройками
	settings.remove ("dateOut");
	settings.beginWriteArray("ListOfOrders",sizeHandler); //начали записывать массив
	for (int i = 0; i < sizeHandler; i++)
	{
		settings.setArrayIndex(i);
		settings.setValue("carNumber", listOfCars[i].carNumber);
		settings.setValue("driverLicNumber", listOfCars[i].driverLicNumber);
		settings.setValue("dateIn", listOfCars[i].dateIn);
		settings.setValue("dateOut", listOfCars[i].dateOut);
	}
	settings.endArray();
}

void CarChange::listFromFile ()
{
	QSettings settings("listOfOrders.ini",QSettings::IniFormat);
	settings.beginReadArray("ListOfOrders");
	QVariant sizeHandler=settings.value ("size");
	for (int i = 0; i < sizeHandler.toInt (); i++)
	{
		listOfCars.append (st);
		settings.setArrayIndex(i);
		listOfCars[i].carNumber = settings.value("carNumber").toString();
		listOfCars[i].driverLicNumber = settings.value("driverLicNumber").toString();
		listOfCars[i].dateIn = settings.value("dateIn").toString();
		listOfCars[i].dateOut = settings.value("dateOut").toString();
	}
	settings.endArray();
}
