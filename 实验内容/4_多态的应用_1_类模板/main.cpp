#include<iostream>
using namespace std;
template <typename T>
T HuiZhi(T a)
{
	return (a >= 0 ? a : -a);
}
int main()
{
	int a = -5, b = 3;
	float c = -2.4f, d = 8.4f;
	double e = -3e-9, f = 3e+6;
	cout << "a=" << HuiZhi(a) << " " << "b=" << HuiZhi(b) << endl;
	cout << "c=" << HuiZhi(c) << " " << "d=" << HuiZhi(d) << endl;
	cout << "e=" << HuiZhi(e) << " " << "f=" << HuiZhi(f) << endl;
	return 0;
}
//根据调用的情况，函数模板的实例化过程是编译器自动完成的
/*
int HuiZhi(int a)
{
	cout << "int A" << endl;
	return (a>=0?a:-a);
}
float HuiZhi(float a)
{
	cout << "float A" << endl;
	return (a >= 0 ? a : -a);
}
double HuiZhi(double a)
{
	cout << "double A" << endl;
	return (a >= 0 ? a : -a);
}
*/