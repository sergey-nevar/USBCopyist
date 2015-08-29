#include "FileCopyist.h"

FileCopyist::FileCopyist()
{
	source.cd("C:\\");
}

bool FileCopyist::setSource(QDir sourceDir)
{
	if(!sourceDir.exists())
		return false;
	source = sourceDir;
	return true;
}

/* function is called to copy files from directory with given pathOfDirectory and all it's subdirectories*/
void FileCopyist::receiveContentOfDirectory(QString pathOfDirectory)
{
	QDir folder(pathOfDirectory);
	foreach (QFileInfo file, folder.entryInfoList(Options::getExtensionsList(), QDir::Files))
	{
		qDebug(file.absoluteFilePath().toUtf8());
	}
	foreach (QFileInfo dir, folder.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot))
	{
		receiveContentOfDirectory(dir.absoluteFilePath());
	}
}
