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
		qDebug(file.absoluteFilePath().toUtf8());
		if(QFile::copy(file.absoluteFilePath(), "D://"+file.fileName()))
			qDebug("OK");
		else
			qDebug("not Ok");
	}
	foreach (QFileInfo dir, folder.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot))
	{
		receiveContentOfDirectory(dir.absoluteFilePath());
	}
}
