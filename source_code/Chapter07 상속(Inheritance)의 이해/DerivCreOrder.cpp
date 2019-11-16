#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;
public:
	SoBase() : baseNum(20)
	{
		cout << "SoBase()" << endl;
	}
	SoBase(int n) :baseNum(n)
	{
		cout << "SoBase(int n)" << endl;
	}
	void ShowBaseData() const
	{
		cout << baseNum << endl;
	}
};

class SoDervied :public SoBase
{
private:
	int derivNum;
public:
	SoDervied(): derivNum(30)
	{}
	SoDervied(int n) :derivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}
	SoDervied(int n1, int n2) :SoBase(n1), derivNum(n2)
	{
		cout << "SoDervied(int n1, int n2)" << endl;
	}
	void ShowDerivData() const
	{
		ShowBaseData();
		cout << derivNum << endl;
	}
};

int main(void)
// 기초 클래스의 생성자 호출이 추가된 것이 전부
{
	cout << "case 1....." << endl;
	SoDervied dr1;
	dr1.ShowDerivData();
	cout << "-----------" << endl;
	cout << "case 2....." << endl;
	SoDervied dr2(12);
	dr2.ShowDerivData();
	cout << "-----------" << endl;
	cout << "case 3....." << endl;
	SoDervied dr3(23, 24);
	dr3.ShowDerivData();
}