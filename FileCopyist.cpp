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

void FileCopyist::copyFiles(QString path)
{
	QDir folder(path);
//	folder.setNameFilters(Options::getExtensionsList());
//	QFileInfoList list = folder.entryInfoList(Options::getExtensionsList(), QDir::AllEntries);
//	for(int i = 0; i < folder.entryInfoList().size(); i++)
//	{
//		qDebug(folder.entryInfoList().at(i).absoluteFilePath().toUtf8());
//	}
	foreach (QFileInfo file, folder.entryInfoList(Options::getExtensionsList(), QDir::Files))
	{
		qDebug(file.absoluteFilePath().toUtf8());
	}
	foreach (QFileInfo dir, folder.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot))
	{
		copyFiles(dir.absoluteFilePath());
	}
}
