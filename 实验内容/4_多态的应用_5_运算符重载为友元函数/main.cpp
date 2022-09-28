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
	friend Complex operator+(const Complex& c1, const Complex& c2);
	friend Complex operator*(const Complex& c1, const Complex& c2);

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
Complex operator+(const Complex& c1, const Complex& c2)
{
	Complex x;
	x.real = c1.real + c2.real;
	x.imag = c1.imag + c2.imag;
	return x;
}
Complex operator*(const Complex& c1, const Complex& c2)
{
	Complex y;
	y.real = c1.real * c2.real - c1.imag * c2.imag;
	y.imag = c1.real * c2.imag + c1.imag * c2.real;
	return y;
}
int main()
{
	Complex c1(5, 0), c2(0, 5), c3(5, 4), c4(3, -2);
	Complex S, P;
	cout << "c1为";
	c1.display();
	cout << "c2为";
	c2.display();
	cout << "c3为";
	c3.display();
	cout << "c4为";
	c4.display();
	cout << "c3+c4为";
	S = operator+(c3, c4);	//S = c3 + c4;
	S.display();
	cout << "c3*c4为";
	P = operator*(c3, c4);	//P = c3 + c4;
	P.display();
	return 0;
}