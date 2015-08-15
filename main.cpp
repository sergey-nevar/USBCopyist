#include "MainWindow.h"
#include <QApplication>
#include <QDir>
#include <QFile>
#include <QFileInfoList>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	QFileInfoList list = QDir::drives();
	QFileInfo file("C:\\123");


	return a.exec();
}
