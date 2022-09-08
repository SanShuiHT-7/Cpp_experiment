#include <iostream>
#include "Tri.h"
using namespace std;
int main() 
{
	Tri tri1;
	cout<<"三角形面积为：area1="<<tri1.area()<<endl;
	Tri tri2(2,3,4);
	cout<<"三角形面积为：area2="<<tri2.area()<<endl;
	Tri * tri3=new Tri(6,6,6);
	cout<<"三角形面积为：area3="<<tri3->area()<<endl;
	delete tri3;
	Tri * tri4;
	tri4=new Tri(12,13,5);
	cout<<"三角形面积为：area4="<<tri4->area()<<endl;
	delete tri4;
	return 0;
}
