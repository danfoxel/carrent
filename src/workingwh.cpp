#include "workingwh.h"

WorkingWH::WorkingWH()
{
}

QVector<carMass> vCarMass(1000);

void WorkingWH::carsToFile()
{
	/*
	vCarMass[0].number="Q546FF-76";
	vCarMass[0].model="BMV X5";
	vCarMass[0].year=1996;
	vCarMass[0].color="Dark Grey";
	vCarMass[0].inSale=true;
	vCarMass[0].isFull=true;
	vCarMass[1].number="A123AA-12";
	vCarMass[1].model="Porsh Cayen";
	vCarMass[1].year=1956;
	vCarMass[1].color="Green";
	vCarMass[1].inSale=true;
	vCarMass[1].isFull=true;
	vCarMass[2].number="B321FH-99";
	vCarMass[2].model="Ford Mondeo";
	vCarMass[2].year=2010;
	vCarMass[2].color="Blue";
	vCarMass[2].inSale=false;
	vCarMass[2].isFull=true;
*/

	QSettings settings("cars.ini",QSettings::IniFormat); //создали файл с настройками
	 settings.beginWriteArray("Cars",1000); //начали записывать массив
	 for (int i = 0; i < 1000; ++i)
	 {
		settings.setArrayIndex(i);
		settings.setValue("number", vCarMass[i].number);
		settings.setValue("model", vCarMass[i].model);
		settings.setValue("color", vCarMass[i].color);
		settings.setValue("year", vCarMass[i].year);
		settings.setValue("inSale", vCarMass[i].inSale);
		settings.setValue("isFull", vCarMass[i].isFull);
	 }
	 settings.endArray();
}
void WorkingWH::carsFromFile ()
{
	QSettings settings("cars.ini",QSettings::IniFormat); //открыли файл с настройками
	settings.beginReadArray("Cars");
	for (int i = 0; i < 1000; ++i)
	{
		settings.setArrayIndex(i);
		vCarMass[i].number = settings.value("number").toString();
		vCarMass[i].model = settings.value("model").toString();
		vCarMass[i].color = settings.value("color").toString();
		vCarMass[i].year = settings.value("year").toInt();
		vCarMass[i].inSale = settings.value("inSale").toBool ();
		vCarMass[i].isFull = settings.value("isFull").toBool ();
	}
	settings.endArray();
	//return vCarMass;
}

const int WorkingWH::findKey(QString number)
{
	int key=0;
	int mul=131;
	int cmul=mul;
	const int hsize = 1000;
	foreach (const QChar c, number)
	{
		key+= c.unicode()*cmul;
		cmul*=mul;
	}
	key %= hsize;
	// http://bytes.com/topic/c/answers/436474-operator-signed-integers
	key = (key + hsize) % hsize;
	return key;
}
