#include<iostream>
using namespace std;
template<typename T>
class Min
{
public:
	T min(T a[], int n);
};
template<typename T>
T Min<T>::min(T a[], int n)
{
	T min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	return min;
}
int main()
{
	cout << "(3)类模板:" << endl;
	int a[7] = { 5,2,1,3,4,7,6 };
	double b[7] = { 0.5,0.3,1.4,1.1,0.9,0.4,0.2 };
	float c[7] = { 2.1f,2.3f,2.4f,1.5f,1.8f,1.3f,5.4f };
	long d[7] = { 1,2,3,4,5,6,7 };
	Min<int> a1;
	cout << "int型数组最小值：" << a1.min(a,7) << endl;
	Min<double> b1;
	cout << "int型数组最小值：" << b1.min(b, 7) << endl;
	Min<float> c1;
	cout << "int型数组最小值：" << c1.min(c, 7) << endl;
	Min<long> d1;
	cout << "int型数组最小值：" << d1.min(d, 7) << endl;
	return 0;
}