#include <iostream>
#include <cstring>
using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary; // �Ŵ� �����ؾ� �ϴ� �޿���
public:
	PermanentWorker(const char* name, int money)
		:salary(money)
	{
		strcpy(this->name, name);
	}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHanler
{
private:
	PermanentWorker* empList[50];
	int empNum;
public:
	EmployeeHanler() : empNum(0)
	{}
	void AddEmployee(PermanentWorker* emp)
	// ���ο� ���� ������ �
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	// ��� ������ �̹� �� �޿����� ���
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}
	void ShowTotalSalary() const
	// �̹� �� �޿��� �Ѿ� ���
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHanler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	EmployeeHanler handler;

	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 1500));

	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();
	
	return 0;

}