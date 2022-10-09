#include"Shape.h"
#include"Circle.h"
Circle::Circle()
{
	this->Radius = 0;
}
void Circle::ShapeName()
{
	cout << "����Circle(Բ��)" << endl;
}
float  Circle::area()
{
	return 3.14 * Radius * Radius;
}
float  Circle::Circumference()
{
	return 2 * 3.14 * Radius;
}
istream& operator>>(istream& input, Circle& C)
{
	cout << "������Բ�İ뾶R��";
	input >> C.Radius;
	return input;
}
ostream& operator<<(ostream& output, const Circle& C)
{
	output << "Բ�İ뾶��" << C.Radius << endl;
	return output;
}