#pragma once
#include <iostream>
#include "Point.h"
using namespace std;
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle:public Point
{
protected:
	float r;
public:
	Circle();
	Circle(float x, float y,float r);
	float area()const;
	friend istream& operator>>(istream& input,  Circle& C);
	friend ostream& operator<<(ostream& output, const Circle& C);
};
#endif // !CIRCLE_H