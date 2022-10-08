#include "Cylinder.h"
Cylinder::Cylinder()
{
	this->x = x;
	this->y = y;
	this->r = r;
	this->h = h;
}
Cylinder::Cylinder(float x, float y, float r, float h)
{
	this->h = h;
}
float Cylinder::area()const
{
	return 2 * Circle::area() + 2 * 3.14 * r * h;
}
float Cylinder::volume()const
{
	return Circle::area() * h;
}
istream& operator>>(istream& input, Cylinder& Cy)
{
	cout << "请输入点坐标（x,y）：";
	input >> Cy.x >> Cy.y ;
	cout << "请输入圆的半径r：";
	input >> Cy.r;
	cout << "请输入圆柱体的高h：";
	input >> Cy.h;
	return input;
}
ostream& operator<<(ostream& output, const Cylinder& Cy)
{
	output << "圆柱体的表面积为：" << Cy.area() << endl;
	output << "圆柱体的体积为：" << Cy.volume() << endl;
	return output;
}