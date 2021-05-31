#pragma once
#include <qdebug.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class SqlUtil
{
	public:
		QSqlQuery OpenSql(void);


		int insert(QSqlQuery sql_query, int type, QString content);


		int update(QSqlQuery sql_query, int type, QString content);


		QStringList query(QSqlQuery sql_query,int type, QStringList &uuidlist);


		int deletedata(QSqlQuery sql_query, QString uuid);


		int deletetable(QSqlQuery sql_query);


		int closeDB(void);
};

