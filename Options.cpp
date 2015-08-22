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

void Options::setExtensions(QString extensionsStr)
{
	extensionsString = extensionsStr;
	extensionsList = extensionsString.split(QRegExp("\\W+"), QString::SkipEmptyParts);
}

void Options::setRequestTime(int time)
{
	requestTime = time;
}

void Options::setAutorunFlag(bool flag)
{
	autorunFlag = flag;
}

void Options::saveSettingsInRegistry(){
	QSettings settings("HKEY_LOCAL_MACHINE\\Software\\USBCopyist", QSettings::NativeFormat);
	settings.setValue("destinationDir", destinationDir.absolutePath());
	settings.setValue("extensions", extensionsString);
	settings.setValue("requestTime", requestTime);
	settings.setValue("autorunFlag", autorunFlag);
}
