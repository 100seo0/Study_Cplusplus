#include <iostream>
using namespace std;

class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	Base() : num1(1), num2(2), num3(3)
	{}
};

class Derived : protected Base {};

int main(void)
{
	Derived drv;
	// cout << drv.num3 << endl; 
	// 컴파일 에러 발생
	// protected로 상속했기에 public 멤버변수 num3은 Derived 클래스에서 protected 멤버가 됨 
	return 0;
}