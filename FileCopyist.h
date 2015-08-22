#ifndef FILECOPYIST_H
#define FILECOPYIST_H

#include <QDir>

class FileCopyist
{
	QDir source;

	public:
		FileCopyist();
		bool setSource(QDir sourceDir);
		void copyFiles();
};

#endif // FILECOPYIST_H
