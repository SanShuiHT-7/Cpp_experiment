#include"Circle.h"
using namespace std;
Circle::Circle()
{
	this->x = 0;
	this->y = 0;
	this->r = 0;
}
Circle::Circle(float x, float y, float r):Point(x,y)
{
	this->r = r;
}
float Circle::area()const
{
	return 3.14 * r * r;
}
istream& operator>>(istream& input, Circle& C)
{
	cout << "请输入点坐标（x,y）：";
	input >> C.x >> C.y ;
	cout << "请输入圆的半径r：";
	input >> C.r;
	return input;
}
ostream& operator<<(ostream& output, const Circle& C)
{
	output << "圆的圆心坐标为：" <<"（" << C.x <<"，" << C.y << "）" << endl;
	output << "圆的半径为：" << C.r << endl;
	output << "圆的面积为：" << C.area() << endl;
	return output;
}