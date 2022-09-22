#pragma once
#include<iostream>
using namespace std;
#ifndef POINT_H
#define POINT_H
class Point
{
private:
	float x, y;
public:
	Point();
	Point(int xx, int yy);
	Point(Point& p);
	float getX();
	float getY();
};
#endif 
