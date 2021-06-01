#include "person.h"
#include<iostream>
using namespace std;
struct PersonalDataPrivate // ����˽�����ݳ�Ա����
{
	string mszName; // ����
	bool mbSex; // �Ա�
	int mnAge; // ����
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