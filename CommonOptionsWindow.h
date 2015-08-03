#ifndef COMMONOPTIONSWINDOW_H
#define COMMONOPTIONSWINDOW_H

#include <QWidget>

namespace Ui {
class CommonOptionsWindow;
}

class CommonOptionsWindow : public QWidget
{
		Q_OBJECT

	public:
		explicit CommonOptionsWindow(QWidget *parent = 0);
		~CommonOptionsWindow();

	private:
		Ui::CommonOptionsWindow *ui;
};

#endif // COMMONOPTIONSWINDOW_H
