#pragma once

#include <QObject>

struct QtContentalDataPrivate; // ����˽�����ݳ�Ա����


class QtContent : public QObject
{

public:

	QtContent(); // constructor
	virtual ~QtContent(); // destructor

	void setContent(const QString);
	QString getContent();

	void setLabel(const QString);
	QString getLabel();

	void setLink(const QString);
	QString getLink();

	void setType(const int);
	int getType();


private:

	QtContentalDataPrivate *d;



};

