#ifndef FILECOPYIST_H
#define FILECOPYIST_H

#include <QDir>
#include <Options.h>

class FileCopyist
{
	QDir source;

	public:
		FileCopyist();
		bool setSource(QDir sourceDir);
		void goToTheDirectory(QString path);
};

#endif // FILECOPYIST_H
