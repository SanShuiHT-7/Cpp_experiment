#include <iostream>
#include "Tri.h"
using namespace std;
int main() 
{
	Tri tri1;
	cout<<"���������Ϊarea1="<<tri1.area()<<endl;
	Tri tri2(2,3,4);
	cout<<"���������Ϊarea2="<<tri2.area()<<endl;
	Tri * tri3=new Tri(6,6,6);
	cout<<"���������Ϊarea3="<<tri3->area()<<endl;
	delete tri3;
	Tri * tri4;
	tri4=new Tri(12,13,5);
	cout<<"���������Ϊarea4="<<tri4->area()<<endl;
	delete tri4;
	return 0;
}
