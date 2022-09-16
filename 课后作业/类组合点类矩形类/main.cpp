#include <iostream>
#
#include "Rectangle.h"
using namespace std;
int main() {
	Point p1;
	Point p2(10,20);
	Rectangle r1(p1,p2);
	cout<<"r1的面积为："<<r1.computeArea()<<endl;
	cout<<"========================"<<endl;
	Rectangle r2=r1;
	cout<<"r2的面积为："<<r2.computeArea()<<endl;
	return 0;
}
