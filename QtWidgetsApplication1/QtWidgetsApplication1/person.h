struct PersonalDataPrivate; // 声明私有数据成员类型

class Person
{
public:

	Person(); // constructor
	virtual ~Person(); // destructor
	void setAge(const int);
	int getAge();

private:

	PersonalDataPrivate* d;
};