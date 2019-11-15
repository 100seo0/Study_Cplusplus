#include <iostream>
#include <cstring>
using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary; // 매달 지불해야 하는 급여액
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
	// 새로운 직원 정보의 등륵
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	// 모든 직원의 이번 달 급여정보 출력
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
	}
	void ShowTotalSalary() const
	// 이번 달 급여의 총액 출력
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