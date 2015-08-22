#include "MainWindow.h"
#include <QApplication>
#include <QSettings>
#include <Options.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Options options;
	options.readSettingsFromRegistry();
	MainWindow w;
	w.show();
	return a.exec();
}
