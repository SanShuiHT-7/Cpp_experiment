#include <iostream>
#include "Point.h"
using namespace std; 
Point::Point()
{
	x=0;
	y=0;
	cout<<"Point类的默认构造函数被调用"<<endl;
} 
Point::Point(int xx,int yy)
{
	x=xx;
	y=yy;
	cout<<"Point类的两个参数的构造函数被调用"<<xx<<","<<yy<<endl; 
} 
Point::Point(Point &p)
{
	x=p.x;
	y=p.y;
	cout<<"Point类的拷贝构造函数被调用"<<p.x<<","<<p.y<<endl;
}
float Point::getX()
{
	return x;
}
float Point::getY()
{
	return y;
}
