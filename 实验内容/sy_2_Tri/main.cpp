#include "Tri.h"
#include <iostream>
using namespace std;
int main() 
{
	Tri tri1;
	cout<<"三角形面积为：area1="<<tri1.area()<<endl;
	cout<<endl;
	Tri tri2(2,3,4);
	cout<<"三角形面积为：area2="<<tri2.area()<<endl;
	cout<<endl;
	Tri * tri3=new Tri(6,6,6);
	cout<<"三角形面积为：area3="<<tri3->area()<<endl;
	delete tri3;
	cout<<endl;
	Tri * tri4;
	tri4=new Tri(10,10,25);
	cout<<"三角形面积为：area4="<<tri4->area()<<endl;
	delete tri4;
	cout<<endl;
	Tri tri5(tri2);
	cout<<"使用拷贝构造函数调用输出的三角形面积为：area5="<<tri5.area()<<endl;
	return 0;
}
