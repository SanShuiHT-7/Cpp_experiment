#include <iostream>
#include <math.h>
using namespace std;
class Tri
{
	private:
		float a;
		float b;
		float c;
		float s;
	public:
	
		Tri(float a1,float b1,float c1);
		Tri(const Tri & T);
		float area();
};
Tri::Tri(float a1=1,float b1=1,float c1=1)
{
	a=a1;
	b=b1;
	c=c1;
	cout<<"三角形三个边：";
	cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<endl;
}
Tri::Tri(const Tri & tri)
{
	a=tri.a;
	b=tri.b;
	c=tri.c;
	cout<<"拷贝构造函数的三角形三个边：";
	cout<<"a="<<tri.a<<" "<<"b="<<tri.b<<" "<<"c="<<tri.c<<endl;
}
float Tri::area()
{
	s=(a+b+c)/2;
	return (sqrt(s*(s-a)*(s-b)*(s-c)));
}
