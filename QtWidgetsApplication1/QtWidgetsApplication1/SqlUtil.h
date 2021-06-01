#pragma once
#include <qdebug.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "QtContent.h"

class SqlUtil
{
	public:
		QSqlQuery OpenSql(void);


		int insert(QSqlQuery sql_query, int type, QString content);


		int update(QSqlQuery sql_query, int type, QString content);


		QList<QtContent*> query(QSqlQuery sql_query,int type);


		int deletedata(QSqlQuery sql_query, QString content);


		int deletetable(QSqlQuery sql_query);


		int closeDB(void);
};

