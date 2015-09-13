#ifndef FILECOPYIST_H
#define FILECOPYIST_H

#include <QDir>
#include <Options.h>
#include <QDateTime>

class FileCopyist
{
	static QString createFolderForFiles();
	public:
		FileCopyist();
		static void receiveContentOfDirectory(QString path);
};

#endif // FILECOPYIST_H
