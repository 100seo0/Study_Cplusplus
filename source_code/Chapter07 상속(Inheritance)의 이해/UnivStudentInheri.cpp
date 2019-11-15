#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage, const char* myname) :age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is: " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << "years old" << endl;
	}
};

class UnivStudent :public Person // Person 클래스의 상속을 의미함
{
private:
	char major[50];
public:
	UnivStudent(const char* myname, int myage,const char* mymajor)
		:Person(myage, myname)
	{
		strcpy(major, mymajor);
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}

};

int main(void)
{
	UnivStudent univ("LEE", 15, "KAKAO");
	univ.WhoAreYou();

	return 0;
}