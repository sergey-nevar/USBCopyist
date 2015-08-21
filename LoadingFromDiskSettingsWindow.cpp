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
