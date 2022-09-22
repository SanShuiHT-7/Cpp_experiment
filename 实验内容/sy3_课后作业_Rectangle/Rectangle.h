#pragma once
#include "Point.h" 
#include <math.h> 
#include <iostream>
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
	Rectangle(Point xp1, Point xp2);
	Rectangle(Rectangle& rec);
	float computeArea();
};
#endif 
