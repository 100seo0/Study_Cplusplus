#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{ }
	SoSimple& AdNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SImpleFunc() const
		// 전달되는 인자를 const 참조자로 받아  
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)
// 전달되는 인자를 const 참조자로 받아 함수호출의 결과로 const 멤버 함수 호출
{
	obj.SImpleFunc();
}

int main(void)
{
	SoSimple obj1(2);
	const SoSimple obj2(7);
	obj1.AdNum(7);
	obj1.SImpleFunc();
	obj2.SImpleFunc();
	YourFunc(obj1);
	YourFunc(obj2);

}