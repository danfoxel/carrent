#include "avltree.h"

struct ClientHandler
{
	QString driverLicNumber;
	QString fIO;
	QString passportData;
	QString clientAdress;

};

AvlTree <ClientHandler> clientHandler;
