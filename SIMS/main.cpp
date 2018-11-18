#include "SIMS.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SIMS w;
	w.showMaximized();
	w.process();
	return a.exec();
}
