#include "person.h"
#include<iostream>
using namespace std;
struct PersonalDataPrivate // 定义私有数据成员类型
{
	string mszName; // 姓名
	bool mbSex; // 性别
	int mnAge; // 年龄
};

// constructor
Person::Person()
{
	d = new PersonalDataPrivate;
};

// destructor
Person::~Person()
{
	delete d;
};

void Person::setAge(const int age)
{
	if (age != d->mnAge)
		d->mnAge = age;
}

int Person::getAge()
{
	return d->mnAge;
}