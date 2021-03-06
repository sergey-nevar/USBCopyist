#include "CommonOptionsWindow.h"
#include "ui_CommonOptionsWindow.h"

CommonOptionsWindow::CommonOptionsWindow(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::CommonOptionsWindow)
{
	ui->setupUi(this);
	setLayout(ui->verticalLayout);
	ui->autorunCheckBox->setChecked(Options::getAutorunFlag());
	ui->timeRequestSpinBox->setValue(Options::getRequestTime());
}

CommonOptionsWindow::~CommonOptionsWindow()
{
	delete ui;
}

void CommonOptionsWindow::on_timeRequestSpinBox_valueChanged(int arg1)
{
	Options::setRequestTime(arg1);
}

void CommonOptionsWindow::on_autorunCheckBox_clicked()
{
	Options::setAutorunFlag(!Options::getAutorunFlag());
}

void CommonOptionsWindow::on_resetToDefaultsButton_clicked()
{
	Options::resetToDefaults();
	ui->autorunCheckBox->setChecked(Options::getAutorunFlag());
	ui->timeRequestSpinBox->setValue(Options::getRequestTime());
}
