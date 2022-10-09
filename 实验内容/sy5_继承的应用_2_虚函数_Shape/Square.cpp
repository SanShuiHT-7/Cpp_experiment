#include"Shape.h"
#include"Square.h"
Square::Square()
{
	this->Width = 0;
	this->Height = 0;
}
void Square::ShapeName()
{
	cout << "这是Square(正方形)" << endl;
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
	cout << "长方形的长和宽：";
	input >> Si.Height>> Si.Width;
	return input;
}
ostream& operator<<(ostream& output, const Square& Si)
{
	output << "长=" << Si.Height << "," << "宽=" << Si.Height << endl;
	return output;
}