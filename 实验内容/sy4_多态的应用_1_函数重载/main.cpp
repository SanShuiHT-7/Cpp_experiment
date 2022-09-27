#include<iostream>
using namespace std;
int min(int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
			
	}
	return min;
}
double min(double a[], int n)
{
	double min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
float min(float a[], int n)
{
	float min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
long min(long a[], int n)
{
	long min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int main()
{
	cout << "(1)函数重载:" << endl;
	int a[7] = { 5,2,1,3,4,7,6 };
	double b[7] = { 0.5,0.3,1.4,1.1,0.9,0.4,0.2 };
	float c[7] = { 2.1f,2.3f,2.4f,1.5f,1.8f,1.3f,5.4f };
	long d[7] = { 1,2,3,4,5,6,7 };
	cout << "int型数组最小值："<<min(a, 7) << endl;
	cout << "double型数组最小值：" << min(b, 7) << endl;
	cout << "float型数组最小值：" << min(c, 7) << endl;
	cout << "long型数组最小值：" << min(d, 7) << endl;
	return 0;
}