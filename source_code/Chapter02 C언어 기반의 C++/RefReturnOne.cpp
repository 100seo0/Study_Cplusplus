#include <iostream>
using namespace std;

int &RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int RefRetFuncTwo(int& ref)
{
	ref++;
	return ref; // ������ �Ҹ�
}

int& RetuRefFunc(int n)
{
	int num = 20;
	num += n;
	return num; // ���� ���� num�� ������ ���·� ��ȯ
}

int main(void)
{
	int num1 = 1;
	int &num2= RefRetFuncOne(num1); //������ &num2�� RefRetFuncOne(num1)�� ����
	num1++; // &num2++�� ����
	num2++; // num1++�� ����

	int numnum1 = 1;
	int numnum2 = RefRetFuncTwo(numnum1);
	//numnum1�� &ref�� ���� numnum2�� RefRetFuncTwo(numnum1)��
	numnum1++; // numnum1++
	numnum2++; // numum2++

	/* RefOne RefTwo ��� ����
		numnum1 = 1;
		&ref = numnum1;
		int num2 = ref;
	*/

	int& ref = RetuRefFunc(10); // �������� num�� ref��� �� �ϳ��� �̸��� ����
	cout << ref << endl;


	cout << num1 << " " << num2 << endl;
	cout << numnum1 << " " << numnum2 << endl;

}