#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	QTabWidget *tabWidget = new QTabWidget(this);
	commonOptionsWindow = new CommonOptionsWindow(this);
	loadingFromDiskSettingsWindow = new LoadingFromDiskSettingsWindow(this);
	tabWidget->addTab(commonOptionsWindow, "Common Option");
	tabWidget->addTab(loadingFromDiskSettingsWindow, "Settings of loading from USB-drive");
	tabWidget->addTab(new QLabel(""), "Backup settings");

	QAction* pactShowHide = new QAction("&Show/Hide Application Window", this);
	connect(pactShowHide, SIGNAL(triggered()), this, SLOT(slotShowHide()));
	QAction* pactQuit = new QAction("&Quit", this);
	connect(pactQuit, SIGNAL(triggered()), qApp, SLOT(quit()));

	trayIconMenu = new QMenu(this);
	trayIconMenu->addAction(pactShowHide);
	trayIconMenu->addAction(pactQuit);

	trayIcon = new QSystemTrayIcon(QPixmap(":/images/pause.png"), this);
	trayIcon->setContextMenu(trayIconMenu);
	trayIcon->show();

	setCentralWidget(tabWidget);
}

MainWindow::~MainWindow()
{
	delete ui;
}
