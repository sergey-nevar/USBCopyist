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
	tabWidget->addTab(commonOptionsWindow, "Общее");
	tabWidget->addTab(loadingFromDiskSettingsWindow, "Настройки загрузки с USB-flash");
	tabWidget->addTab(new QLabel(""), "Настройки резервного копирования");
	setCentralWidget(tabWidget);
}

MainWindow::~MainWindow()
{
	delete ui;
}
