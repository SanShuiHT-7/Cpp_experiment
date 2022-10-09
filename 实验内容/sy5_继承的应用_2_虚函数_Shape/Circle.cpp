#include"Shape.h"
#include"Circle.h"
Circle::Circle()
{
	this->Radius = 0;
}
void Circle::ShapeName()
{
	cout << "这是Circle(圆形)" << endl;
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
	cout << "请输入圆的半径R：";
	input >> C.Radius;
	return input;
}
ostream& operator<<(ostream& output, const Circle& C)
{
	output << "圆的半径：" << C.Radius << endl;
	return output;
}