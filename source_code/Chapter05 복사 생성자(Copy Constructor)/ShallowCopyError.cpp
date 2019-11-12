#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* _name, int _age) :age(_age)
	{
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
	}
	void ShowPersonInfo()
	{
		cout << name << ' ' <<age<< endl;
	}
	Person(const Person& copy) :age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	~Person()
	{
		delete[]name;
		cout << "Called destructor" << endl;
	}
};

int main()
{
	Person p1("lele" , 11);
	Person p2(p1);
	p1.ShowPersonInfo();
	p2.ShowPersonInfo();
	// ���࿡ ������ �ߴ� ������ delete �ع��� p2�� ������ �� ���� ������
}