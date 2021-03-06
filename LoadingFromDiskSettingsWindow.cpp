#include "LoadingFromDiskSettingsWindow.h"
#include "ui_LoadingFromDiskSettingsWindow.h"

LoadingFromDiskSettingsWindow::LoadingFromDiskSettingsWindow(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::LoadingFromDiskSettingsWindow)
{
	ui->setupUi(this);
	setLayout(ui->mainLayout);
	ui->extensionsLineEdit->setText(Options::getExtensionsString());
	ui->pathLineEdit->setText(Options::getDestinationDir().absolutePath());
}

LoadingFromDiskSettingsWindow::~LoadingFromDiskSettingsWindow()
{
	delete ui;
}

void LoadingFromDiskSettingsWindow::on_browsePushButton_clicked()
{
	QString path = QFileDialog::getExistingDirectory(this, "Choose folder for downloaded files", "C:\\");
	ui->pathLineEdit->setText(path);
	ui->pathLineEdit->setCursorPosition(0);
}

void LoadingFromDiskSettingsWindow::on_extensionsLineEdit_editingFinished()
{
	Options::setExtensions(ui->extensionsLineEdit->text());
}

void LoadingFromDiskSettingsWindow::on_pathLineEdit_textChanged(const QString &arg1)
{
	Options::setDestination(arg1);
}
