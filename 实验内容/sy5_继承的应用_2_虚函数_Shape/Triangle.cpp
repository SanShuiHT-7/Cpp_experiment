#include"Shape.h"
#include"Triangle.h"
Tirangle::Tirangle()
{
	this->a = 0;
	this->b = 0;
	this->c = 0;
}
void Tirangle::ShapeName()
{
	cout << "这是Tirangle(三角形)" << endl;
}
float  Tirangle::area()
{
	float P = 0;
	float S = 0;
	P = (a + b + c) / 2;
	S = sqrt(P*(P - a)*(P - b)*(P- c));
	return S;
}
float  Tirangle::Circumference()
{
	return a+b+c;
}
istream& operator>>(istream& input, Tirangle& T)
{
	cout << "请输入三角形的三条边：";
	input >> T.a >> T.b >> T.c;
	while (!((T.a + T.b) > T.c && (T.b + T.c) > T.a && (T.a + T.c) > T.b))
	{
		cout << "请输入正确的三角形三边关系：";
		cin.clear();
		input >> T.a >> T.b >> T.c;
	}
	return input;
	
}
ostream& operator<<(ostream& output, const Tirangle& T)
{
	output << "三角形三边a=" << T.a << "," << "b=" << T.b << "c=" << T.c << endl;
	return output;
}