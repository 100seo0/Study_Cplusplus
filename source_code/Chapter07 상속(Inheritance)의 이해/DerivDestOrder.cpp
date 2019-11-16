#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;
public:
	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase(): " << endl;
	}
	~SoBase()
	{
		cout << "~SoBase(): " << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;
public:
	SoDerived(int n) :SoBase(n), derivNum(n)
	{
		cout << "SoDerived():" << derivNum << endl;
	}
	~SoDerived()
	{
		cout << "~SoDerived():"<< endl;
	}
};

int main(void)
{
	SoDerived dr1(50);
	SoDerived dr2(50);

}