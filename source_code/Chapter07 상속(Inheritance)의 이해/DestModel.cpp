#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	// char name[100];
	char* name;
public:
	/*Person(const char *name)
	{
		strcpy(this->name, name);
		cout << this->name << endl;
	}*/
	Person(const char* name)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	~Person()
	{
		delete[]name;
		cout << "~Person()" << endl;
	}
	void WhatYourName() const
	{
		cout << "My name is" << name << endl;
	}
};

class UnivStudent : public Person
{
private:
	char* subject;
public:
	UnivStudent(const char* name, const char* subject)
		:Person(name)
	{
		this->subject = new char[strlen(subject) + 1];
		strcpy(this->subject, subject);
	}
	~UnivStudent()
	{
		delete[]subject;
		cout << "~UnivStudent()" << endl;
	}
	void WhoAreYou() const
	{
		WhatYourName();
		cout << "My major is" << subject << endl;
	}
};

int main()
{
	UnivStudent st1("KIM", "Mathmatics");
	st1.WhoAreYou();
	UnivStudent st2("PARK", "P.E");
	st2.WhoAreYou();
}