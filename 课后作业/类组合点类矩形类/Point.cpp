#include "Point.h"
Point::Point()
{
	x=0;
	y=0;
	cout<<"Point���Ĭ�Ϲ��캯��������"<<endl;
} 
Point::Point(int xx,int yy)
{
	x=xx;
	y=yy;
	cout<<"Point������������Ĺ��캯��������"<<endl; 
} 
Point::Point(const Point &p)
{
	x=p.x;
	y=p.y;
	cout<<"Point��Ŀ������캯��������"<<endl;
}
float Point::getX()
{
	return x;
}
float Point::getY()
{
	return y;
}
