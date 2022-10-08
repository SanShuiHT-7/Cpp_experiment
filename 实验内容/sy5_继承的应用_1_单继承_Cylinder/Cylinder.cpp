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
	cout << "����������꣨x,y����";
	input >> Cy.x >> Cy.y ;
	cout << "������Բ�İ뾶r��";
	input >> Cy.r;
	cout << "������Բ����ĸ�h��";
	input >> Cy.h;
	return input;
}
ostream& operator<<(ostream& output, const Cylinder& Cy)
{
	output << "Բ����ı����Ϊ��" << Cy.area() << endl;
	output << "Բ��������Ϊ��" << Cy.volume() << endl;
	return output;
}