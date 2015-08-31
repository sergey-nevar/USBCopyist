#ifndef DRIVECHECKER_H
#define DRIVECHECKER_H

#include <QWidget>
#include <FileCopyist.h>
#include <QtConcurrent/QtConcurrent>
#include <QTimer>
#include <QDir>
#include <Options.h>

class DriveChecker : public QWidget
{
		Q_OBJECT

	QFileInfoList driveList;
	int numOfDrives;

	public:
		explicit DriveChecker(QWidget *parent = 0);
		void runChecking();
	signals:

	public slots:
		void checkDrives();
};

#endif // DRIVECHECKER_H
