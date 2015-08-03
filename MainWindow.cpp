#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "QTableWidget"
#include "QLabel"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	QTabWidget *tabWidget = new QTabWidget;
	tabWidget->addTab(new QLabel(""), "Общее");
	tabWidget->addTab(new QLabel(""), "Настройки загрузки с USB-flash");
	tabWidget->addTab(new QLabel(""), "Настройки выгрузки на USB-flash");
	setCentralWidget(tabWidget);
}

MainWindow::~MainWindow()
{
	delete ui;
}
