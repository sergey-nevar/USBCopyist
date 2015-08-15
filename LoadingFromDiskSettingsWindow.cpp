#include "LoadingFromDiskSettingsWindow.h"
#include "ui_LoadingFromDiskSettingsWindow.h"

LoadingFromDiskSettingsWindow::LoadingFromDiskSettingsWindow(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::LoadingFromDiskSettingsWindow)
{
	ui->setupUi(this);
	setLayout(ui->mainLayout);
	QRegExp regExpression("(\\*\\.[\\w]*,? ?)*");
	QRegExpValidator *regExpValidator = new QRegExpValidator(regExpression, this);
	ui->firstTurnLineEdit->setValidator(regExpValidator);
	ui->secondTurnLineEdit->setValidator(regExpValidator);
	ui->thirdTurnLineEdit->setValidator(regExpValidator);
}

LoadingFromDiskSettingsWindow::~LoadingFromDiskSettingsWindow()
{
	delete ui;
}
