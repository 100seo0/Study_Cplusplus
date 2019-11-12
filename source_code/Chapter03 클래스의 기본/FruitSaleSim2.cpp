#include <iostream>
using namespace std;

class FruitSeller
{
private:
	const int  APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	FruitSeller(int price, int num, int money)
		:APPLE_PRICE(price), numOfApples(num), myMoney(money)
	{
	}
	/*void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price; // ������ ����� ����
		numOfApples = num;
		myMoney = money;
	}*/
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSalesResult()
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class Buyer
{
private:
	int myMoney;
	int numOfApples;
public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowSalesResult()
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};


int main(void)
{
	FruitSeller seller(1000, 20, 5);
	Buyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 4);
	seller.ShowSalesResult();
	buyer.ShowSalesResult();
}