#include <iostream>

using namespace std;

int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	// int *ptr = &num; 불가 허용하면 ref에서 값 변경을 허용
	const int& ref = *ptr;
	const int* (&ref1) = ptr;
	cout << ref << endl; // num 값 반환
	cout << ref1 << endl; // 주소 반환

	cout << *ptr << endl; // num 값 반환
	cout << *ref1 << endl; // num 값 반환
}