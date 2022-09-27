/*
报错情况：
int a=10,b=10;
cout<<a+b<<endl;	//算数运算
再定义一个
string a1="jel",b1="lly";
cout<<a1+b1<<endl;	//连接运算
运算符重载就是赋予已有的运算符多重含义

complex c1,12;
cout<<c1+c2<<endl;
*/
#include <iostream>
#include "math.h";
using namespace std;
class Complex
{
private:
	double real;
	double imag;
public:
	Complex();
	Complex(double r, double i);
	void display();
	Complex operator+(Complex c);
	Complex operator*(Complex c);

};
Complex::Complex()
{
	real = 0;
	imag = 0;
}
Complex::Complex(double r, double i) 
{
	real = r;
	imag = i;
}
void Complex::display()
{
	if (imag != 0)//虚数a±bi
	{
		if (real != 0)//虚数a±bi
		{
			if (imag > 0)//虚数a+bi
			{
				cout << "虚数=" << real << "+" << imag << "i" << endl;
			}
			else//虚数a-bi
			{
				cout << "虚数=" << real << imag << "i" << endl;
			}
		}
		else//纯虚数bi
		{
			cout << "纯虚数=" << imag << "i" << endl;
		}
	}
	else//实数a
	{
		cout << "实数=" << real << endl;
	}

}
Complex Complex::operator+(Complex c)
{
	Complex x;
	x.real = real + c.real;
	x.imag = imag + c.imag;
	return x;
}
Complex Complex::operator*(Complex c)
{
	Complex y;
	y.real = real * c.real-imag * c.imag;
	y.imag = real * c.imag+imag * c.real;
	return y;
}
int main()
{
	Complex c1(5,0),c2(0,5),c3(5,4),c4(3,-2);
	Complex S,P;
	cout << "c1为";
	c1.display();
	cout << "c2为";
	c2.display();
	cout << "c3为";
	c3.display();
	cout << "c4为";
	c4.display();
	cout << "c3+c4为";
	S = c3.operator+(c4);	//S = c3 + c4;
	S.display();
	cout << "c3*c4为";
	P = c3.operator*(c4);	//P = c3 + c4;
	P.display();
	return 0;
}