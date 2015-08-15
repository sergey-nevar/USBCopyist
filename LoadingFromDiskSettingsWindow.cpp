#include "LoadingFromDiskSettingsWindow.h"
#include "ui_LoadingFromDiskSettingsWindow.h"

LoadingFromDiskSettingsWindow::LoadingFromDiskSettingsWindow(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::LoadingFromDiskSettingsWindow)
{
	ui->setupUi(this);
	setLayout(ui->mainLayout);
}

LoadingFromDiskSettingsWindow::~LoadingFromDiskSettingsWindow()
{
	delete ui;
}
