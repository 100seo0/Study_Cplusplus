#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* si1 = new Simple;

	cout << "case 2: ";
	Simple* si2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout <<endl<< "end of main" << endl;
	free(si2);
	delete si1;
	return 0;
}