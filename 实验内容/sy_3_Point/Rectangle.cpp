#include "Rectangle.h"
Rectangle::Rectangle()
{
	cout << "Rectangle类的默认构造函数被调用" << endl;
}
Rectangle::Rectangle(Point xp1, Point xp2) :p1(xp1), p2(xp2)
{
	cout << "Rectangle类带有（Point,Point）的构造函数被调用" << endl;
}
Rectangle::Rectangle(Rectangle& rec) :p1(rec.p1), p2(rec.p2)
{
	cout << "Rectangle类的拷贝构造函数被调用" << endl;
}
float Rectangle::computeArea()
{
	float length = fabs(p2.getX() - p1.getX());
	float width = fabs(p2.getY() - p1.getY());
	return length * width;
}
