#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum{CLERK, SENIOR, ASSIST, MANAGER};
	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
			break;
		}
	}
}

class NameCard
{
private:
	char* name;
	char* company;
	char* phoneNum;
	int position;
public:
	NameCard(const char* _name,const char* _com,const char *_num, const int pos)
		:position(pos)
	{
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
		company = new char[strlen(_com) + 1];
		strcpy(company, _com);
		phoneNum = new char[strlen(_num) + 1];
		strcpy(phoneNum, _num);
	}

	void ShowNameCardInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ���: " << company << endl;
		cout << "��ȭ��ȣ: " << phoneNum << endl;
		cout << "����: ";
		COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}

	~NameCard()
	{
		delete[]name;
		delete[]company;
		delete[]phoneNum;
	}
};

int main(void)
{
	NameCard manClerk("hoNG", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	manClerk.ShowNameCardInfo();
}