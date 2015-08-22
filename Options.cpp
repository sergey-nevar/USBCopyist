#include "Options.h"

Options::Options()
{
}

int Options::requestTime = 0;
QString Options::extensionsString = "";
QStringList Options::extensionsList;
bool Options::autorunFlag = true;
QDir Options::destinationDir;

bool Options::setDestination(QDir destination)
{
	if(!destination.exists())
		return false;
	destinationDir = destination;
	return true;

}
