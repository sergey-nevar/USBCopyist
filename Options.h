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
		static void setExtensionsString(QString extensionsStr)
		{
			extensionsString = extensionsStr;
			extensionsList = extensionsString.split(QRegExp("\\W+"), QString::SkipEmptyParts);
			QStringListIterator iterator(extensionsList);
			while(iterator.hasNext())
			{
				qDebug(iterator.next().toUtf8());
			}
		}
		static QString getExtensionsString()
		{
			return extensionsString;
		}

		Options();
};

#endif // OPTIONS_H
