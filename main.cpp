#include "MainWindow.h"
#include <QApplication>
#include <QSettings>
#include <Options.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	Options options;
	return a.exec();
}
