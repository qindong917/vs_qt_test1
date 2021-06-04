#include "QtContent.h"

struct QtContentalDataPrivate // ����˽�����ݳ�Ա����
{
	QString content; 
	QString label;
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

void QtContent::setLabel(const QString label)
{
	if (label != d->label)
		d->label = label;
}

QString QtContent::getLabel()
{
	return d->label;
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
