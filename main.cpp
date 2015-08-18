#include "MainWindow.h"
#include <QApplication>
#include <QSettings>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

//	QSettings settings("HKEY_LOCAL_MACHINE\\Software\\USBCopyist", QSettings::NativeFormat);
//	settings.setValue("FirstParameter", "First");
	return a.exec();
}
