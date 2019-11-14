#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
	// 멤버변수에 저장된 값을 수정하지 않는 함수는 가급적으로 const 선언
};

int main(void)
{
	const SoSimple obj(7);
	// obj.AddNum(20);
	obj.ShowData();
	return 0;
}