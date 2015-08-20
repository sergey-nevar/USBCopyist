#ifndef OPTIONS_H
#define OPTIONS_H
#include <QString>

class Options
{
	static int requestTime;
	static QString extensionsString;
	static QStringList *extensionsList;
	static bool autorunFlag;

	public:
		static void setRequestTime(int i){
			requestTime = i;
		}
		static int getRequestTime(){
			return requestTime;
		}

		Options();
};

#endif // OPTIONS_H
