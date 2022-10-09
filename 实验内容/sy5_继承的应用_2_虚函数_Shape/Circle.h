#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include"Shape.h"
using namespace std;
class Circle:public Shape
{
protected:
	float Radius;
public:
	Circle();
	void ShapeName();
	float area();
	float Circumference();
	friend istream& operator>>(istream& input, Circle& C);
	friend ostream& operator<<(ostream& output, const Circle& C);

};
#endif // !CIRCLE_H