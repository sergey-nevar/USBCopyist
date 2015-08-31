#ifndef FILECOPYIST_H
#define FILECOPYIST_H

#include <QDir>
#include <Options.h>

class FileCopyist
{

	public:
		FileCopyist();
		static void receiveContentOfDirectory(QString path);
};

#endif // FILECOPYIST_H
