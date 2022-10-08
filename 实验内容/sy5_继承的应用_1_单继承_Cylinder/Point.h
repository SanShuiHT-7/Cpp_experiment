#pragma once
#include <iostream>
using namespace std;
#ifndef POINT_H
#define POINT_H
class Point
{
protected:
	float x, y;
public:
	Point();
	Point(float x, float y);
	friend istream& operator>>(istream& input, Point& P);
	friend ostream& operator<<(ostream & output, const Point& P);

};
#endif // !POINT_H
