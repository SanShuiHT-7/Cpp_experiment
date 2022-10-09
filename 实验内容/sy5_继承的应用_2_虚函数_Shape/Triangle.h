#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include"Shape.h"
#include <math.h>
using namespace std;
class Tirangle :public Shape
{
protected:
	float a, b,c;
public:
	Tirangle();
	void ShapeName();
	float area();
	float Circumference();
	friend istream& operator>>(istream& input, Tirangle& T);
	friend ostream& operator<<(ostream& output, const Tirangle& T);

};
#endif // !TRIANGLE_H