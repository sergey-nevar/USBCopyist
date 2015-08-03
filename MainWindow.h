#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "CommonOptionsWindow.h"
#include "QTableWidget"
#include "QLabel"

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
	private:
		Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
