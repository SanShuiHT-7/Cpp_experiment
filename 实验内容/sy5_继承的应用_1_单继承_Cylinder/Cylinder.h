#pragma once
#ifndef CYLINDER_H
#define CYLINDER_H
#include<iostream>
#include "Circle.h"
using namespace std;
class Cylinder:public Circle
{
protected:
	float h;
public:
	Cylinder();
	Cylinder(float x, float y, float r, float h);
	float area()const;
	float volume()const;
	friend istream& operator>>(istream& input, Cylinder& Cy);
	friend ostream& operator<<(ostream& output, const Cylinder& Cy);
};
#endif // !CYLINDER_H