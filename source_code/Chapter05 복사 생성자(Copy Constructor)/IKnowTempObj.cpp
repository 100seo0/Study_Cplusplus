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
	// �ӽð�ü�� ���� �����ϴ� ���, 100���� �ʱ�ȭ�� Temporary �ӽð�ü ����
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	// �ӽð�ü ����, ��ü�� ���� �� ��ȯ�Ǹ� ���� �� ��ȯ�� ��ġ�� ��ü�� ������ �� �ִ� �������� ��ȯ
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);
	// �ӽð�ü�� ���������� ������ ref�� �ӽð�ü�� ����
	cout << "********** end of main!" << endl << endl;
}