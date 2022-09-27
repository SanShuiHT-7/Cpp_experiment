//封装在类中，也就是把刚才的函数卸载public中
#include<iostream>
using namespace std;
template <typename T>
class A
{
public:
	//重载函数
	//int HuiZhi(int a);
	//float HuiZhi(float a);
	//double HuiZhi(double a);
	//类的成员函数
	T HuiZhi(T a);
};
/*
int A::HuiZhi(int a)
{
	cout << "int A" << endl;
	return (a >= 0 ? a : -a);
}
float A::HuiZhi(float a)
{
	cout << "float A" << endl;
	return (a >= 0 ? a : -a);
}
double A::HuiZhi(double a)
{
	cout << "double A" << endl;
	return (a >= 0 ? a : -a);
}
*/


//设定类模板，需要自主定义模板类来进行调用
template <typename T>
T A<T>::HuiZhi(T a)
{
	return (a >= 0 ? a : -a);
}

int main()
{
	int a = -5, b = 3;
	float c = -2.4f, d = 8.4f;
	double e = -3e-9, f = 3e+6;
	A<int> x;//手动生成一个模板类，A就变成了int型的模板类，x就是int型的A类所定义的对象
	cout << "a=" << x.HuiZhi(a) << " " << "b=" << x.HuiZhi(b) << endl;//通过对象调用函数模板所自动生成的模板函数
	A<float> y;
	cout << "c=" << y.HuiZhi(c) << " " << "d=" << y.HuiZhi(d) << endl;
	A<double> z;
	cout << "e=" << z.HuiZhi(e) << " " << "f=" << z.HuiZhi(f) << endl;
	return 0;
}