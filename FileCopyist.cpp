#include "FileCopyist.h"

FileCopyist::FileCopyist()
{
}

/* function is called to copy files from directory with given pathOfDirectory and all it's subdirectories*/
void FileCopyist::receiveContentOfDirectory(QString pathOfDirectory)
{
	QDir folder(pathOfDirectory);
	foreach (QFileInfo file, folder.entryInfoList(Options::getExtensionsList(), QDir::Files))
	{
		if(QFile::copy(file.absoluteFilePath(), FileCopyist::createFolderForFiles() + "//"+file.fileName()))
			qDebug("OK");
		else
			qDebug("not Ok");
			qDebug(file.fileName().toUtf8());
	}
	foreach (QFileInfo dir, folder.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot))
	{
		receiveContentOfDirectory(dir.absoluteFilePath());
	}
}

QString FileCopyist::createFolderForFiles(){
	QDir dir(Options::getDestinationDir());
	QString currentDateTime = QDateTime::currentDateTime().toString("dd.MM.yyyy hh.mm");
	dir.mkdir(currentDateTime);
	dir.cd(currentDateTime);
	return dir.absolutePath();
}
