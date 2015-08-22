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

//bool FileCopyist::copyFiles()
//{

//}
