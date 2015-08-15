#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "CommonOptionsWindow.h"
#include "QTableWidget"
#include "QLabel"
#include "LoadingFromDiskSettingsWindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
		Q_OBJECT

	public:
		explicit MainWindow(QWidget *parent = 0);
		~MainWindow();
		CommonOptionsWindow *commonOptionsWindow;
		LoadingFromDiskSettingsWindow *loadingFromDiskSettingsWindow;
	private:
		Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
