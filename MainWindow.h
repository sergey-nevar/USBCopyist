#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "CommonOptionsWindow.h"
#include <QTableWidget>
#include <QLabel>
#include "LoadingFromDiskSettingsWindow.h"
#include <QMenu>
#include <QSystemTrayIcon>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
		Q_OBJECT

	public:
		explicit MainWindow(QWidget *parent = 0);
		void closeEvent(QCloseEvent*);
		~MainWindow();

	private:
		Ui::MainWindow *ui;
		CommonOptionsWindow *commonOptionsWindow;
		LoadingFromDiskSettingsWindow *loadingFromDiskSettingsWindow;
		QMenu *trayIconMenu;
		QSystemTrayIcon *trayIcon;

	public slots:
		void slotShowHide(){
			setVisible(!isVisible());
		}
};

#endif // MAINWINDOW_H
