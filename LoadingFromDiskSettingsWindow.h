#ifndef LOADINGFROMDISKSETTINGSWINDOW_H
#define LOADINGFROMDISKSETTINGSWINDOW_H

#include <QWidget>

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
};

#endif // LOADINGFROMDISKSETTINGSWINDOW_H