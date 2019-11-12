#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* _name, int myage)
		:age(myage)
	{
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
		cout << "called Person(const char* _name, int myage)" << endl;
	}
	Person()
		:name(NULL), age(0)
	{
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char* _name, int myage)
	{
		name = _name;
		age = myage;
		cout << "SetPersonInfo(char* _name, int myage)" << endl;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}

	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person* parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		parr[i] = new Person(namestr, age);
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];
	return 0;
}
