#include "DriveChecker.h"

DriveChecker::DriveChecker(QWidget *parent) :
	QWidget(parent)
{
	numOfDrives = QDir::drives().size();
}

void DriveChecker::checkDrives()
{
	driveList = QDir::drives();
/*if we have new drives, call new thread of FileCopyist for each new drive*/
	if(driveList.size() > numOfDrives)
	{
		for(int i = driveList.size()-numOfDrives; i > 0; i--)
		{
			QtConcurrent::run(FileCopyist::receiveContentOfDirectory,
										driveList.at(driveList.size()-i).absoluteFilePath());
		}
	}
	numOfDrives = driveList.size();
}

void DriveChecker::runChecking()
{
	QTimer *timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(checkDrives()));
	timer->start(Options::getRequestTime());
}
