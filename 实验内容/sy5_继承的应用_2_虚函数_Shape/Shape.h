#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;
class Shape
{
public:
	virtual void ShapeName() = 0;
	virtual float area() = 0;
	virtual float Circumference() = 0;
};
#endif // !SHAPE_H