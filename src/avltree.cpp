#include "avltree.h"

AvlTree <ClientHandler> clientHandler;

ClientHandler clHa;
/*

void AvlTree::treeToFile ()
{
	QFile::remove ("treeOfClients.ini");
	QSettings settings("treeOfClients.ini",QSettings::IniFormat); //создали файл с настройками
	settings.beginWriteArray("treeOfClients",sizeHandler); //начали записывать массив
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

void AvlTree::treeFromFile ()
{
	QSettings settings("treeOfClients.ini",QSettings::IniFormat);
	settings.beginReadArray("treeOfClients");
	QVariant sizeHandler=settings.value ("size");
	\
	for (int i = 0; i < sizeHandler.toInt (); i++)
	{
		settings.setArrayIndex(i);
		listOfCars[i].carNumber = settings.value("carNumber").toString();
		listOfCars[i].driverLicNumber = settings.value("driverLicNumber").toString();
		listOfCars[i].dateIn = settings.value("dateIn").toString();
		listOfCars[i].dateOut = settings.value("dateOut").toString();
	}
	settings.endArray();
}
*/
