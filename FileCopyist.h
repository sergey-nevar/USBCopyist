#ifndef FILECOPYIST_H
#define FILECOPYIST_H

#include <QDir>
#include <Options.h>
#include <QtConcurrent/QtConcurrent>

class FileCopyist
{
	QDir source;

	public:
		FileCopyist();
		bool setSource(QDir sourceDir);
		static void receiveContentOfDirectory(QString path);
};

#endif // FILECOPYIST_H
