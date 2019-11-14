#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) :num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destory obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is" << num << endl;
	}
};

int main(void)
{
	Temporary(100);
	// 임시객체를 직접 생성하는 방법, 100으로 초기화된 Temporary 임시객체 생성
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	// 임시객체 생성, 객체가 생성 및 반환되면 생성 및 반환된 위치에 객체를 참조할 수 있는 참조값이 반환
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);
	// 임시객체를 생성했으나 참조자 ref로 임시객체를 참조
	cout << "********** end of main!" << endl << endl;
}