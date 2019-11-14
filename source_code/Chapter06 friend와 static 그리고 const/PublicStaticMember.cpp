#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;
public: // 변수와 함수의 구분을 목적으로 삽입
	SoSimple()
	{
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;

int main(void)
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout<<sim1.simObjCnt<< "번째 SoSimple 객체" << endl;
	cout<<sim2.simObjCnt<< "번째 SoSimple 객체" << endl;
	return 0;
}