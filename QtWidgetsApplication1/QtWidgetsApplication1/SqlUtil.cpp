#include "SqlUtil.h"
QSqlDatabase database;

#include <QUuid>
#include "QtContent.h"

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

	//创建表格
	QSqlQuery sql_query;
	if (!sql_query.exec("create table notes(content text primary key, type int ,uuid text)"))
	{
		qDebug() << "@Error: Fail to create table." << sql_query.lastError();
	}
	else
	{
		qDebug() << "@Table created!";
	}
	return sql_query;
}

//建立并打开数据库

//插入数据
int SqlUtil::insert(QSqlQuery sql_query, int type, QString content) {

	sql_query.prepare("INSERT INTO notes (content, type, uuid) VALUES(:content, :type, :uuid)");

	sql_query.bindValue(":content", content);

	sql_query.bindValue(":type", type);

	sql_query.bindValue(":uuid", QUuid::createUuid().toString());

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

int SqlUtil::update(QSqlQuery sql_query, int type, QString content) {

	//修改数据
	;
	if (!sql_query.exec("update notes set content = " + content + " where type = " + type + ""))
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

QStringList SqlUtil::query(QSqlQuery sql_query,int type,QStringList &uuidlist) {

	QStringList list;
	//查询数据
	sql_query.exec("select * from notes where type = " + QString::number(type));
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
			QString uuid = sql_query.value(3).toString();
			list.append(content);
			uuidlist.append(uuid);
			//ColorSpace* cs = new ColorSpace();
			QtContent m = new QtContent();
			qDebug() << QString("type:%1    content:%2").arg(type).arg(content);
		}
	}
	return list;
}


int  SqlUtil::deletedata(QSqlQuery sql_query,QString uuid) {
	//删除数据
	sql_query.exec("delete from notes where uuid = " + uuid);
	if (!sql_query.exec())
	{
		qDebug() << sql_query.lastError() << uuid;

		return -1;
	}
	else
	{
		qDebug() << "@deleted!" << uuid;

		return 1;
	}


}

int SqlUtil::deletetable(QSqlQuery sql_query) {
	//删除表格
	sql_query.exec("drop table notes");
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

//关闭数据库
int SqlUtil::closeDB() {

	database.close();

	return 1;
}