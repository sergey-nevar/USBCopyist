#include "CommonOptionsWindow.h"
#include "ui_CommonOptionsWindow.h"

CommonOptionsWindow::CommonOptionsWindow(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::CommonOptionsWindow)
{
	ui->setupUi(this);
}

CommonOptionsWindow::~CommonOptionsWindow()
{
	delete ui;
}
