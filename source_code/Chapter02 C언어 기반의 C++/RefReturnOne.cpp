#include <iostream>
using namespace std;

int &RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int RefRetFuncTwo(int& ref)
{
	ref++;
	return ref; // 참조자 소멸
}

int& RetuRefFunc(int n)
{
	int num = 20;
	num += n;
	return num; // 지역 변수 num을 참조의 형태로 반환
}

int main(void)
{
	int num1 = 1;
	int &num2= RefRetFuncOne(num1); //참조자 &num2는 RefRetFuncOne(num1)과 같음
	num1++; // &num2++와 같음
	num2++; // num1++과 같음

	int numnum1 = 1;
	int numnum2 = RefRetFuncTwo(numnum1);
	//numnum1은 &ref와 같고 numnum2는 RefRetFuncTwo(numnum1)임
	numnum1++; // numnum1++
	numnum2++; // numum2++

	/* RefOne RefTwo 모두 공통
		numnum1 = 1;
		&ref = numnum1;
		int num2 = ref;
	*/

	int& ref = RetuRefFunc(10); // 지역변수 num에 ref라는 또 하나의 이름이 붙음
	cout << ref << endl;


	cout << num1 << " " << num2 << endl;
	cout << numnum1 << " " << numnum2 << endl;

}