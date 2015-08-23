#include "Options.h"

int Options::requestTime = 0;
QString Options::extensionsString = "";
QStringList Options::extensionsList;
bool Options::autorunFlag = true;
QDir Options::destinationDir;

Options::Options()
{
	settings = new QSettings("HKEY_LOCAL_MACHINE\\Software\\USBCopyist", QSettings::NativeFormat);
}

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
	Options::receiveExtensionsListFromExtensionsString();
}

void Options::setRequestTime(int time)
{
	requestTime = time;
}

void Options::setAutorunFlag(bool flag)
{
	autorunFlag = flag;
}

void Options::saveSettingsInRegistry()
{
	settings->setValue("destinationDir", destinationDir.absolutePath());
	settings->setValue("extensions", extensionsString);
	settings->setValue("requestTime", requestTime);
	settings->setValue("autorunFlag", autorunFlag);
}

void Options::readSettingsFromRegistry()
{
	destinationDir.cd(settings->value("destinationDir", "D:\\").toString());
	extensionsString = settings->value("extensions", "").toString();
	Options::receiveExtensionsListFromExtensionsString();
	requestTime = settings->value("requestTime", 3).toInt();
	autorunFlag = settings->value("autorunFlag", false).toBool();
}

void Options::receiveExtensionsListFromExtensionsString()
{
	extensionsList = extensionsString.split(QRegExp("\\W+"), QString::SkipEmptyParts);
	extensionsList.replaceInStrings(QRegExp("^"), "*.");
}
