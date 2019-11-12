#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
private:
	char str[30];
public:
	void SetString(const char* st)
	{
		strcpy(str, st);
	}
	void PrintString()
	{
		cout << str << endl;
	}
};

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.PrintString();

}

