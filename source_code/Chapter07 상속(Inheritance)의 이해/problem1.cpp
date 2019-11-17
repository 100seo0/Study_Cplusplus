#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int gause)
		:gasolineGauge(gause)
	{
	}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int gause, int elec)
		:Car(gause), electricGauge(elec)
	{
	}
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar :public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int gause, int elec, int water)
		:HybridCar(gause, elec), waterGauge(water)
	{

	}
	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®: " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << endl;
	}
};

int main(void)
{
	HybridWaterCar car1(50, 40, 30);
	car1.ShowCurrentGauge();
	return 0;
}