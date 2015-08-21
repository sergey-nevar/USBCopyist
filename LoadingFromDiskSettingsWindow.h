#ifndef LOADINGFROMDISKSETTINGSWINDOW_H
#define LOADINGFROMDISKSETTINGSWINDOW_H

#include <QWidget>
#include <QFileDialog>
#include <QRegExp>
#include <Options.h>

namespace Ui {
class LoadingFromDiskSettingsWindow;
}

class LoadingFromDiskSettingsWindow : public QWidget
{
		Q_OBJECT

	public:
		explicit LoadingFromDiskSettingsWindow(QWidget *parent = 0);
		~LoadingFromDiskSettingsWindow();

	private:
		Ui::LoadingFromDiskSettingsWindow *ui;

	signals:
		void changeFirstTurnExtensions(QString);
	private slots:
		void on_browsePushButton_clicked();
		void on_extensionsLineEdit_editingFinished();
};

#endif // LOADINGFROMDISKSETTINGSWINDOW_H
