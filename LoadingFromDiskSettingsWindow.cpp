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
	ui->extensionsLineEdit->setValidator(regExpValidator);
}

LoadingFromDiskSettingsWindow::~LoadingFromDiskSettingsWindow()
{
	delete ui;
}

void LoadingFromDiskSettingsWindow::on_browsePushButton_clicked()
{
	QString path = QFileDialog::getExistingDirectory(0, "Choose folder for downloaded files", "C:\\");
	ui->pathLineEdit->setText(path);
}
