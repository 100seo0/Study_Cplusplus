#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2)
		:num1(n1), num2(n2)
	{
		cout << "called SoSimple(int n1, int n2)" << endl;
	}

	SoSimple(SoSimple& copy)
		:num1(copy.num1), num2(copy.num2)
	{
		cout << "called SoSimple(SoSimple& copy)" << endl;
	}
	/*
	explicit SoSimple(SoSimple& copy)
		:num1(copy.num1), num2(copy.num2)
	{
		cout << "called SoSimple(SoSimple& copy)" << endl;
	}
	explicit�� �����ڿ� ����Ǹ� �������� ��ȯ�� ������� �ʱ⿡
	AAA obj=3�� �ƴ� AAA obj(3)���� �ؾ��Ѵ�
	*/

	void ShowSimpleData()
	{
		cout << num1 << endl << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2 = sim1;
	// SoSimple sim2(sim1)���� ��ȯ
	cout << "���� �� �ʱ�ȭ ����" << endl;
	sim2.ShowSimpleData();
	return 0;
}