#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{}
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple &copy)" << endl;
	}
	SoSimple& AddNum(int n)
		// 복사생성자가 호출되지 않는다.
	{
		num += n;
		return *this;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
// 매개변수의 선언을 보면, 인자의 전달과정에서 복사 생성자가 호출됨을 알 수 있음
{
	cout << "return 이전" << endl;
	return ob;
	// 반환형이 참조형이 아니기에 ob 객체의 복사본이 만들어지면서 반환이 진행
	// 객체를 반환하게 되면 '임시객체'라는 것이 생성, 지역적으로 선언된 객체 ob는 소멸
	// 최종적으로 반환되는 객체는 새롭게 생성되는 '임시객체'
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();
}