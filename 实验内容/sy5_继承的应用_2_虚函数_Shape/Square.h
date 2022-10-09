#pragma once
#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include"Shape.h"
using namespace std;
class Square :public Shape
{
protected:
	float Width,Height;
public:
	Square();
	void ShapeName();
	float area();
	float Circumference();
	friend istream& operator>>(istream& input, Square& Si);
	friend ostream& operator<<(ostream& output, const Square& Si);

};
#endif // !SQUARE_H