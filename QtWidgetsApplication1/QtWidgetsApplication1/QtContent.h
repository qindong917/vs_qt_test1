#pragma once

#include <QObject>

class QtContent : public QObject
{
	Q_OBJECT


public:
	QtContent(QObject *parent);
	QtContent();
	~QtContent();

public:
	QString uuid;
	QString content;
	int type;

};
