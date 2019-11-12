#include <iostream>
using namespace std;

class TwoNumber
{
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;
		// num = 100; 매개변수의 값을 105로 정함
		this->num1 = 100;
		this->num2 = num2;
	}
	/*
	TwoNumber(int num1, int num2)
		:num1(num1), num2(num2) { }
		// 멤버 이니셜라이저에서는 this 포인터 사용 불가
	*/
	void ShowTwoNumber()
	{
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}