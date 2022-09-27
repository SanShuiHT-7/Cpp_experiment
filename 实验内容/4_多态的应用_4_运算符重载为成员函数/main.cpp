/*
���������
int a=10,b=10;
cout<<a+b<<endl;	//��������
�ٶ���һ��
string a1="jel",b1="lly";
cout<<a1+b1<<endl;	//��������
��������ؾ��Ǹ������е���������غ���

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
	cout << "c1Ϊ";
	c1.display();
	cout << "c2Ϊ";
	c2.display();
	cout << "c3Ϊ";
	c3.display();
	cout << "c4Ϊ";
	c4.display();
	cout << "c3+c4Ϊ";
	S = c3.operator+(c4);	//S = c3 + c4;
	S.display();
	cout << "c3*c4Ϊ";
	P = c3.operator*(c4);	//P = c3 + c4;
	P.display();
	return 0;
}