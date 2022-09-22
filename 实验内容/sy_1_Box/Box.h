#pragma once
#include <iostream>
using namespace std;
#ifndef BOX_H
#define BOX_H
class Box
{
private:
	float length;
	float width;
	float height;
public:
	void get_value();
	void volume();
	void display_volume();
	void s_area();
	void display_s_area();
};
#endif
