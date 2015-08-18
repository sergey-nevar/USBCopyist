#include "FileCopyist.h"

FileCopyist::FileCopyist()
{
	source.cd("C:\\");
	destination.cd("D:\\");
}

bool FileCopyist::setSource(QDir sourceDir)
{
	if(!sourceDir.exists())
		return false;
	source = sourceDir;
	return true;
}

bool FileCopyist::setDestination(QDir destinationDir)
{
	if(!destinationDir.exists())
		return false;
	destination = destinationDir;
	return true;
}

//bool FileCopyist::copyFiles()
//{

//}
