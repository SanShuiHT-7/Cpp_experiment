#include "Rectangle.h"
Rectangle::Rectangle()
{
	cout << "Rectangle���Ĭ�Ϲ��캯��������" << endl;
}
Rectangle::Rectangle(Point xp1, Point xp2) :p1(xp1), p2(xp2)
{
	cout << "Rectangle����У�Point,Point���Ĺ��캯��������" << endl;
}
Rectangle::Rectangle(Rectangle& rec) :p1(rec.p1), p2(rec.p2)
{
	cout << "Rectangle��Ŀ������캯��������" << endl;
}
float Rectangle::computeArea()
{
	float length = fabs(p2.getX() - p1.getX());
	float width = fabs(p2.getY() - p1.getY());
	return length * width;
}
