#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	QTabWidget *tabWidget = new QTabWidget;
	commonOptionsWindow = new CommonOptionsWindow(this);
	tabWidget->addTab(commonOptionsWindow, "Общее");
	tabWidget->addTab(new QLabel(""), "Настройки загрузки с USB-flash");
	tabWidget->addTab(new QLabel(""), "Настройки выгрузки на USB-flash");
	setCentralWidget(tabWidget);
}

MainWindow::~MainWindow()
{
	delete ui;
}
