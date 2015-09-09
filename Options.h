#ifndef OPTIONS_H
#define OPTIONS_H

#include <QString>
#include <QStringListIterator>
#include <QDir>
#include <QSettings>

class Options
{
	static int requestTime;
	static QString extensionsString;
	static QStringList extensionsList;
	static bool autorunFlag;
	static QDir destinationDir;
	QSettings *settings;

	public:		
		static int getRequestTime()
		{
			return requestTime;
		}		
		static QString getExtensionsString()
		{
			return extensionsString;
		}
		static QStringList getExtensionsList()
		{
			return extensionsList;
		}		
		static bool getAutorunFlag()
		{
			return autorunFlag;
		}
		static QDir getDestination()
		{
			return destinationDir;
		}

		static void setExtensions(QString extensionsStr);
		static bool setDestination(QDir destinationDir);
		static void setRequestTime(int time);
		static void setAutorunFlag(bool flag);
		static void receiveExtensionsListFromExtensionsString();
		static void resetToDefaults();
		void readSettingsFromRegistry();
		void saveSettingsInRegistry();
		Options();
		~Options()
		{
			saveSettingsInRegistry();
			delete settings;
		}
};

#endif // OPTIONS_H
