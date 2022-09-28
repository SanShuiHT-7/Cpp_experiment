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
	if (imag != 0)//����a��bi
	{
		if (real != 0)//����a��bi
		{
			if (imag > 0)//����a+bi
			{
				cout << "����=" << real << "+" << imag << "i" << endl;
			}
			else//����a-bi
			{
				cout << "����=" << real << imag << "i" << endl;
			}
		}
		else//������bi
		{
			cout << "������=" << imag << "i" << endl;
		}
	}
	else//ʵ��a
	{
		cout << "ʵ��=" << real << endl;
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
	cout << "c1Ϊ";
	c1.display();
	cout << "c2Ϊ";
	c2.display();
	cout << "c3Ϊ";
	c3.display();
	cout << "c4Ϊ";
	c4.display();
	cout << "c3+c4Ϊ";
	S = operator+(c3, c4);	//S = c3 + c4;
	S.display();
	cout << "c3*c4Ϊ";
	P = operator*(c3, c4);	//P = c3 + c4;
	P.display();
	return 0;
}