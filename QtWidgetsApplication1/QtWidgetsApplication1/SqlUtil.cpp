#include "SqlUtil.h"
QSqlDatabase database;

#include <QDateTime>


QSqlQuery SqlUtil::OpenSql() {

	database = QSqlDatabase::addDatabase("QSQLITE");

	database.setDatabaseName("MyDataBase.db");

	if (!database.open())
	{
		qDebug() << "@Error: Failed to connect database." << database.lastError();
	}
	else
	{
		qDebug() << "@Succeed to connect database.";
	}

	//�������
	QSqlQuery sql_query;

	if (!sql_query.exec("create table notes(content text primary key, label text, type int)"))
	{
		qDebug() << "@Error: Fail to create table." << sql_query.lastError();
	}
	else
	{
		qDebug() << "@Table created!";
	}
	return sql_query;
}

//�����������ݿ�

//��������
int SqlUtil::insert(QSqlQuery sql_query, int type, QString content) {

	sql_query.prepare("INSERT INTO notes (content, label, type) VALUES(:content, :label, :type)");

	sql_query.bindValue(":content", content);

	sql_query.bindValue(":type", type);

	sql_query.bindValue(":label", "");

	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError() << content;

		return -1;
	}
	else
	{
		qDebug() << "@inserted !" << content;

		return 1;
	}

}

int SqlUtil::update(QSqlQuery sql_query, QString label, QString content) {

	//�޸�����
	QString str = QString("update notes set label = '%1' where content = '%2'").arg(label).arg(content);

	if (!sql_query.exec(str))
	{
		qDebug() << sql_query.lastError() << content;

		return -1;
	}
	else
	{
		qDebug() << "@updated!" << content;

		return 1;
	}
}

QList<QtContent*> SqlUtil::query(QSqlQuery sql_query, int type) {

	QList<QtContent*> list;
	//��ѯ����
	QString str = QString("select * from notes where type =%1 ").arg(type);

	sql_query.exec(str);

	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError();
	}
	else
	{

		while (sql_query.next())
		{
			QString content = sql_query.value(0).toString();

			int type = sql_query.value(1).toInt();

			QtContent *m = new QtContent();

			m->setType(type);

			m->setContent(content);

			list.append(m);
		}
	}
	return list;
}


int  SqlUtil::deletedata(QSqlQuery sql_query, QString content) {
	//ɾ������  delete from ���� where ���� = ����;
	
	QString str = QString("delete from notes where content= '%1' ").arg(content);

	if (!sql_query.exec(str))
	{
		qDebug() << sql_query.lastError() << str;

		return -1;
	}
	else
	{
		qDebug() << "@deleted!" << str;

		return 1;
	}
}


int SqlUtil::deletetable(QSqlQuery sql_query) {
	//ɾ�����
	sql_query.exec("drop table notes");

	QString str = QString("drop table notes");

	if (sql_query.exec())
	{
		qDebug() << sql_query.lastError();

		return -1;
	}
	else
	{
		qDebug() << "@table cleared";

		return 1;
	}
}

//�ر����ݿ�
int SqlUtil::closeDB() {

	database.close();

	return 1;
}