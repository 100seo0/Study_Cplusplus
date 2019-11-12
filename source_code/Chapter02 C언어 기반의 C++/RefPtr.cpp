#include <iostream>
using namespace std;

void change(int* (&pref1), int* (&pref2))
{
	int* ptr = pref1;
	pref1 = pref2;
	pref2 = ptr;
}

int main()
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;
	cout << *ptr1 << " " << *ptr2 << endl;
	change(ptr1, ptr2);
	cout << *ptr1 << " " << *ptr2 << endl;
}