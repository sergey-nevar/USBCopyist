#ifndef OPTIONS_H
#define OPTIONS_H

#include <QString>
#include <QStringListIterator>
class Options
{
	static int requestTime;
	static QString extensionsString;
	static QStringList extensionsList;
	static bool autorunFlag;

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

		Options();
};

#endif // OPTIONS_H
