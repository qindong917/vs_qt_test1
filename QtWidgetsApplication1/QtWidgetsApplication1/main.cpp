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

void initsql() {


	//�����������ݿ�
	QSqlDatabase database;
	database = QSqlDatabase::addDatabase("QSQLITE");
	database.setDatabaseName("MyDataBase.db");
	if (!database.open())
	{
		qDebug() << "Error: Failed to connect database." << database.lastError();
	}
	else
	{
		qDebug() << "Succeed to connect database.";
	}

	//�������
	QSqlQuery sql_query;
	if (!sql_query.exec("create table student(id int primary key, name text, age int)"))
	{
		qDebug() << "Error: Fail to create table." << sql_query.lastError();
	}
	else
	{
		qDebug() << "Table created!";
	}

	//��������
	if (!sql_query.exec("INSERT INTO student VALUES(1, \"Wang\", 23)"))
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "inserted Wang!";
	}
	if (!sql_query.exec("INSERT INTO student VALUES(2, \"Li\", 23)"))
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "inserted Li!";
	}

	//�޸�����
	sql_query.exec("update student set name = \"QT\" where id = 1");
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "updated!";
	}

	//��ѯ����
	sql_query.exec("select * from student");
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		while (sql_query.next())
		{
			int id = sql_query.value(0).toInt();
			QString name = sql_query.value(1).toString();
			int age = sql_query.value(2).toInt();
			qDebug() << QString("id:%1    name:%2    age:%3").arg(id).arg(name).arg(age);
		}
	}

	//ɾ������
	sql_query.exec("delete from student where id = 1");
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "deleted!";
	}

	//ɾ�����
	sql_query.exec("drop table student");
	if (sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{
		qDebug() << "table cleared";
	}

	//�ر����ݿ�
	database.close();

}
