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
		// ��������ڰ� ȣ����� �ʴ´�.
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
// �Ű������� ������ ����, ������ ���ް������� ���� �����ڰ� ȣ����� �� �� ����
{
	cout << "return ����" << endl;
	return ob;
	// ��ȯ���� �������� �ƴϱ⿡ ob ��ü�� ���纻�� ��������鼭 ��ȯ�� ����
	// ��ü�� ��ȯ�ϰ� �Ǹ� '�ӽð�ü'��� ���� ����, ���������� ����� ��ü ob�� �Ҹ�
	// ���������� ��ȯ�Ǵ� ��ü�� ���Ӱ� �����Ǵ� '�ӽð�ü'
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();
}