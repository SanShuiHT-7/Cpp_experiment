//��װ�����У�Ҳ���ǰѸղŵĺ���ж��public��
#include<iostream>
using namespace std;
template <typename T>
class A
{
public:
	//���غ���
	//int HuiZhi(int a);
	//float HuiZhi(float a);
	//double HuiZhi(double a);
	//��ĳ�Ա����
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


//�趨��ģ�壬��Ҫ��������ģ���������е���
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
	A<int> x;//�ֶ�����һ��ģ���࣬A�ͱ����int�͵�ģ���࣬x����int�͵�A��������Ķ���
	cout << "a=" << x.HuiZhi(a) << " " << "b=" << x.HuiZhi(b) << endl;//ͨ��������ú���ģ�����Զ����ɵ�ģ�庯��
	A<float> y;
	cout << "c=" << y.HuiZhi(c) << " " << "d=" << y.HuiZhi(d) << endl;
	A<double> z;
	cout << "e=" << z.HuiZhi(e) << " " << "f=" << z.HuiZhi(f) << endl;
	return 0;
}