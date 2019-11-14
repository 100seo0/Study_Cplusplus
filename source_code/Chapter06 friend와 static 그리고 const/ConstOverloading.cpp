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
		// ���޵Ǵ� ���ڸ� const �����ڷ� �޾�  
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)
// ���޵Ǵ� ���ڸ� const �����ڷ� �޾� �Լ�ȣ���� ����� const ��� �Լ� ȣ��
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