#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
	Point p3;
	Point p4(10,20);	
	Rectangle r1(p3,p4);
	cout<<"r1的面积为："<<r1.computeArea()<<endl;
	cout<<"========================"<<endl;
	Rectangle r2=r1;
	cout<<"r2的面积为："<<r2.computeArea()<<endl;
	return 0;
}
