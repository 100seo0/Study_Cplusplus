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
	explicit가 생성자에 선언되면 묵시적인 변환을 허용하지 않기에
	AAA obj=3이 아닌 AAA obj(3)으로 해야한다
	*/

	void ShowSimpleData()
	{
		cout << num1 << endl << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;
	// SoSimple sim2(sim1)으로 변환
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();
	return 0;
}