#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	//SimpleClass()
	//	// 반환형 선언 x, 실제로 반환하지 않음
	//	// 클래의 이름과 함수이름이 동일
	//	// -> 생성자 (객체 생성 시 딱 한 번 호출)
	//{
	//	num1 = 0;
	//	num2 = 0;
	//}
	//SimpleClass(int n)
	//{
	//	num1 = n;
	//	num2 = 0;
	//}
	//SimpleClass(int n1, int n2)
	//{
	//	num1 = n1;
	//	num2 = n2;
	//}
	//SimpleClass(int n1 = 0, int n2 = 0)
	//// 디폴트 값 설정
	//{
	//	num1 = n1;
	//	num2 = n2;
	//}
	
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	// SimpleClass* sc = new SimpleClass(100);
	SimpleClass sc1;
	sc1.ShowData();
	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}