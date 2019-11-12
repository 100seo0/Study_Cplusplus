#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}
class NameCard
{
private:
	int position;
	char* name;
	char* company;
	char *phoneNum;
public:
	NameCard(const char* _name,const char* _company,const char* _phoneNum, int _position)
		:position(_position)
	{
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
		company = new char[strlen(_company) + 1];
		strcpy(company, _company);
		phoneNum = new char[strlen(_phoneNum) + 1];
		strcpy(phoneNum, _phoneNum);
	}

	NameCard(const NameCard &copy1)
		:position(copy1.position)
	{
		name = new char[strlen(copy1.name) + 1];
		strcpy(name, copy1.name);
		company = new char[strlen(copy1.company) + 1];
		strcpy(company, copy1.company);
		phoneNum = new char[strlen(copy1.phoneNum) + 1];
		strcpy(phoneNum, copy1.phoneNum);
	}
	void ShowNameCardInfo()
	{
		cout << "이름: " << name << endl;
		cout << "회사명: " << company << endl;
		cout << "전화번호: " << phoneNum << endl;
		cout << "직급: ";
		COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}
};

int main(void)
{
	NameCard manClerk("hoNG", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	manClerk.ShowNameCardInfo();
	copy1.ShowNameCardInfo();

	return 0;
}