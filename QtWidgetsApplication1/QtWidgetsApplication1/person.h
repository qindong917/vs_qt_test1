struct PersonalDataPrivate; // ����˽�����ݳ�Ա����

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