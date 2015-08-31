#include "MainWindow.h"
#include <QApplication>
#include <Options.h>
#include <DriveChecker.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Options options;
	options.readSettingsFromRegistry();
	MainWindow w;
	w.show();

	DriveChecker dc;
	dc.runChecking();
	return a.exec();
}
