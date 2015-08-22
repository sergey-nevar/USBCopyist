#include "Options.h"

Options::Options()
{
}

int Options::requestTime = 0;
QString Options::extensionsString = "";
QStringList Options::extensionsList;
bool Options::autorunFlag = true;
QDir Options::destinationDir;
QSettings* Options::settings = new QSettings("HKEY_LOCAL_MACHINE\\Software\\USBCopyist", QSettings::NativeFormat);

bool Options::setDestination(QDir destination)
{
	if(!destination.exists())
		return false;
	destinationDir = destination;
	settings->setValue("destinationDir", destination.absolutePath());
	return true;

}

void Options::setExtensions(QString extensionsStr)
{
	extensionsString = extensionsStr;
	settings->setValue("extensions", extensionsStr);
	extensionsList = extensionsString.split(QRegExp("\\W+"), QString::SkipEmptyParts);
}

void Options::setRequestTime(int time)
{
	requestTime = time;
	settings->setValue("requestTime", time);
}

void Options::setAutorunFlag(bool flag)
{
	autorunFlag = flag;
	settings->setValue("autorunFlag", flag);
}
