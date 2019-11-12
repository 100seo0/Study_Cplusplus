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
		:name(NULL),age(0)
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
		delete []name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person parr[3];
	char namestr[100];
	char* strptr;
	int age, len, i;
	
	for (i = 0; i < 3; i++)
	{
		cout << "이름 ";
		cin >> namestr;
		cout << "나이";
		cin >> age;
		len = strlen(namestr)+1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}

	for (i = 0; i < 3; i++)
	{
		parr[i].ShowPersonInfo();
	}

}