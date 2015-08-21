#include "CommonOptionsWindow.h"
#include "ui_CommonOptionsWindow.h"

CommonOptionsWindow::CommonOptionsWindow(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::CommonOptionsWindow)
{
	ui->setupUi(this);
	setLayout(ui->verticalLayout);
}

CommonOptionsWindow::~CommonOptionsWindow()
{
	delete ui;
}

void CommonOptionsWindow::on_timeRequestSpinBox_valueChanged(int arg1)
{
	Options::setRequestTime(arg1);
}
