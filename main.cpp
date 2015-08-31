#include "MainWindow.h"
#include <QApplication>
#include <QSettings>
#include <Options.h>
#include <FileCopyist.h>
#include <QtConcurrent/QtConcurrent>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Options options;
	options.readSettingsFromRegistry();
	MainWindow w;
	w.show();

//	QtConcurrent::run(FileCopyist::receiveContentOfDirectory, Options::getDestination().absolutePath());
	return a.exec();
}
