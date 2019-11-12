//#include <iostream>
//using namespace std;
//
//typedef struct __Point
//{
//	int xpos;
//	int ypos;
//}Point;
//
//Point& PntAdder(const Point& p1, const Point& p2)
//{
//	Point* pttr = new Point;
//	pttr->xpos = p1.xpos + p2.xpos;
//	pttr->ypos = p1.ypos + p2.ypos;
//	return *pttr;
//}
//
//int main()
//{
//	Point* ptr1 = new Point;
//	ptr1->xpos = 3;
//	ptr1->ypos = 3;
//
//	Point* ptr2 = new Point;
//	ptr2->xpos = 3;
//	ptr2->ypos = 3;
//
//	Point &pref =  PntAdder(*ptr1, *ptr2);
//	cout << pref.xpos << endl << pref.ypos;
//}

#include <iostream>
using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* ptr = new Point;
	ptr->xpos = p1.xpos + p2.xpos;
	ptr->ypos = p1.ypos + p2.ypos;
	return *ptr;
}

int main()
{
	Point* ptr1 = new Point;
	Point* ptr2 = new Point;

	ptr1->xpos = 1;
	ptr1->ypos = 2;

	ptr2->xpos = 1;
	ptr2->ypos = 2;

	Point& pref = PntAdder(*ptr1, *ptr2);
	cout << pref.xpos << endl << pref.ypos;

}