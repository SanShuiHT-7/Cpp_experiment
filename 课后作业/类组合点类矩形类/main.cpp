#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
	Point p3;
	Point p4(10,20);	
	Rectangle r1(p3,p4);
	cout<<"r1�����Ϊ��"<<r1.computeArea()<<endl;
	cout<<"========================"<<endl;
	Rectangle r2=r1;
	cout<<"r2�����Ϊ��"<<r2.computeArea()<<endl;
	return 0;
}
