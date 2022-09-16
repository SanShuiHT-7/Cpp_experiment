#include "Point.h" 
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
		Rectangle(Rectangle &rec);
		float computeArea();
};

#endif 
