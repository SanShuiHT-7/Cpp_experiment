#include <iostream>

#include "Point.h" 
using namespace std;
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle
{
	private:
		Point p1;
		Point p2;
	public:
		Rectangle();
		Rectangle(Point xp1,Point xp2);
		Rectangle(const Rectangle &rec);
		float computeArea();
};

#endif 
