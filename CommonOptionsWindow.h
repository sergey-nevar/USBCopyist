#ifndef COMMONOPTIONSWINDOW_H
#define COMMONOPTIONSWINDOW_H

#include <QWidget>
#include <Options.h>

namespace Ui {
class CommonOptionsWindow;
}

class CommonOptionsWindow : public QWidget
{
		Q_OBJECT

	public:
		explicit CommonOptionsWindow(QWidget *parent = 0);
		~CommonOptionsWindow();

	private slots:
		void on_timeRequestSpinBox_valueChanged(int arg1);

		void on_autorunCheckBox_clicked();

	private:
		Ui::CommonOptionsWindow *ui;
};

#endif // COMMONOPTIONSWINDOW_H
