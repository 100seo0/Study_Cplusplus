#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class CirOut
{
private:
	Point point;
	int rad;
public:
	void Init(int x, int y, int r)
	{
		rad = r;
		point.Init(x, y);
	}
	void ShowRadInfo() const
	{
		cout << "Outter Circle Info..." << endl;
		point.ShowPointInfo();
	}
};

class CirIn
{
private:
	Point point;
	int rad;
public:
	void Init(int x, int y, int r)
	{
		rad = r;
		point.Init(x, y);
	}
	void ShowRadInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		point.ShowPointInfo();
	}
};


class Ring
{
private:
	CirOut cirout;
	CirIn cirin;
public:
	void Init(int x1, int y1, int r1, int x2, int y2, int r2)
	{
		cirin.Init(x1, y1, r1);
		cirout.Init(x2, y2, r2);
	}
	void ShowRingInfo() const
	{
		cirout.ShowRadInfo();
		cirin.ShowRadInfo();
	}
};


int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}