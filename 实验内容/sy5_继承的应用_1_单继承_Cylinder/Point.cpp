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
	cout << "������㣨x��y��������ֵ��";
	input >> P.x >> P.y;
	return input;
}
ostream& operator<<(ostream& output,const Point& P)
{
	output << "�����Ϊ��"<<"��" << P.x << "��" << P.y << "��" << endl;
	return output;
}
