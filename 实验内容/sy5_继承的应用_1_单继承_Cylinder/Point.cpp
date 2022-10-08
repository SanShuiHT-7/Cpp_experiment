#include "Point.h"
#include <iostream>
using namespace std;
Point::Point()
{
	this->x = 0;
	this->y = 0;
}
Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}
istream& operator>>(istream& input,Point& P)
{
	cout << "请输入点（x，y）的坐标值：";
	input >> P.x >> P.y;
	return input;
}
ostream& operator<<(ostream& output,const Point& P)
{
	output << "坐标点为："<<"（" << P.x << "，" << P.y << "）" << endl;
	return output;
}
