#include "QtContent.h"

struct QtContentalDataPrivate // 定义私有数据成员类型
{
	QString content; 
	int type; 
};

// constructor
QtContent::QtContent()
{
	d = new QtContentalDataPrivate;
};

// destructor
QtContent::~QtContent()
{
	delete d;
};

void QtContent::setContent(const QString content)
{
	if (content != d->content)
		d->content = content;
}

QString QtContent::getContent()
{
	return d->content;
}


void QtContent::setType(const int type)
{
	if (type != d->type)
		d->type = type;
}

int QtContent::getType()
{
	return d->type;
}
