#pragma once
#include <math.h>
#include <iostream>
using namespace std;
#ifndef TRI_H
#define TRI_H
class Tri
{
private:
	float a;
	float b;
	float c;
	float s;
public:
	Tri();
	Tri(float a1, float b1, float c1);
	Tri(const Tri& T);
	float area();
};

#endif // !TRI_H
