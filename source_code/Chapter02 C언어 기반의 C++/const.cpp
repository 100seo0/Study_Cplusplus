#include <iostream>

using namespace std;

int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	// int *ptr = &num; �Ұ� ����ϸ� ref���� �� ������ ���
	const int& ref = *ptr;
	const int* (&ref1) = ptr;
	cout << ref << endl; // num �� ��ȯ
	cout << ref1 << endl; // �ּ� ��ȯ

	cout << *ptr << endl; // num �� ��ȯ
	cout << *ref1 << endl; // num �� ��ȯ
}