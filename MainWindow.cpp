#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	QTabWidget *tabWidget = new QTabWidget;
	commonOptionsWindow = new CommonOptionsWindow(this);
	loadingFromDiskSettingsWindow = new LoadingFromDiskSettingsWindow(this);
	tabWidget->addTab(commonOptionsWindow, "Common Option");
	tabWidget->addTab(loadingFromDiskSettingsWindow, "Settings of loading from USB-drive");
	tabWidget->addTab(new QLabel(""), "Backup settings");
	setCentralWidget(tabWidget);
}

MainWindow::~MainWindow()
{
	delete ui;
}
