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

void FileCopyist::goToTheDirectory(QString path)
{
	QDir folder(path);
	foreach (QFileInfo file, folder.entryInfoList(Options::getExtensionsList(), QDir::Files))
	{
		qDebug(file.absoluteFilePath().toUtf8());
	}
	foreach (QFileInfo dir, folder.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot))
	{
		goToTheDirectory(dir.absoluteFilePath());
	}
}
