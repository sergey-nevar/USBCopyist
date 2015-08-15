#ifndef FILECOPYIST_H
#define FILECOPYIST_H
#include <QDir>

class FileCopyist
{
	QDir source;
	QDir destination;
	public:
		FileCopyist();
		bool setSource(QDir sourceDir);
		bool setDestination(QDir destinationDir);
};

#endif // FILECOPYIST_H
