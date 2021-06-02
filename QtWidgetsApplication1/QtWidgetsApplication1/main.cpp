#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#pragma execution_character_set("utf-8")

//���ͷ�ļ�
#include <qdebug.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
//windeployqt

int main(int argc, char *argv[])
{
	
    QApplication a(argc, argv);

	QString dir = QApplication::applicationDirPath();

	QApplication::addLibraryPath("./images");

	a.setWindowIcon(QIcon("./images/logo.ico"));

    QtWidgetsApplication1 w;

	w.setWindowTitle("���Թ���");

    w.show();

	return a.exec();
}
