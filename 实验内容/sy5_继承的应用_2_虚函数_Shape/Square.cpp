#include"Shape.h"
#include"Square.h"
Square::Square()
{
	this->Width = 0;
	this->Height = 0;
}
void Square::ShapeName()
{
	cout << "����Square(������)" << endl;
}
float  Square::area()
{
	return Width * Height;
}
float  Square::Circumference()
{
	return 2 * (Width + Height);
}
istream& operator>>(istream& input, Square& Si)
{
	cout << "�����εĳ��Ϳ�";
	input >> Si.Height>> Si.Width;
	return input;
}
ostream& operator<<(ostream& output, const Square& Si)
{
	output << "��=" << Si.Height << "," << "��=" << Si.Height << endl;
	return output;
}