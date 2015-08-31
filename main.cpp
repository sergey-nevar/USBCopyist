#include "MainWindow.h"
#include <QApplication>
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
