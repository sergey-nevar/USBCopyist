#ifndef OPTIONS_H
#define OPTIONS_H

#include <QString>
#include <QStringListIterator>
#include <QDir>

class Options
{
	static int requestTime;
	static QString extensionsString;
	static QStringList extensionsList;
	static bool autorunFlag;
	static QDir destinationDir;

	public:
		static void setRequestTime(int i)
		{
			requestTime = i;
		}
		static int getRequestTime()
		{
			return requestTime;
		}
		static void setExtensions(QString extensionsStr)
		{
			extensionsString = extensionsStr;
			extensionsList = extensionsString.split(QRegExp("\\W+"), QString::SkipEmptyParts);
		}
		static QString getExtensionsString()
		{
			return extensionsString;
		}
		static QStringList getExtensionsList()
		{
			return extensionsList;
		}
		static void setAutorunFlag(bool flag)
		{
			autorunFlag = flag;
		}
		static bool getAutorunFlag()
		{
			return autorunFlag;
		}
		static bool setDestination(QDir destinationDir);
		Options();
};

#endif // OPTIONS_H
