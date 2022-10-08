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
	cout << "����������꣨x,y����";
	input >> C.x >> C.y ;
	cout << "������Բ�İ뾶r��";
	input >> C.r;
	return input;
}
ostream& operator<<(ostream& output, const Circle& C)
{
	output << "Բ��Բ������Ϊ��" <<"��" << C.x <<"��" << C.y << "��" << endl;
	output << "Բ�İ뾶Ϊ��" << C.r << endl;
	output << "Բ�����Ϊ��" << C.area() << endl;
	return output;
}