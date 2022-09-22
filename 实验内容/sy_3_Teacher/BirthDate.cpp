#include "BirthDate.h"
BirthDate::BirthDate(int y, int m, int d) :year(y), month(m), day(d)	//使用初始化列表进行赋值
{

};
void BirthDate::display1()	//打印输出生日
{
	cout << "生日：" << year << "年" << month << "月" << day << "日" << endl;
};
void BirthDate::changeDate(int y, int m, int d) //改变生日日期
{
	year = y;
	month = m;
	day = d;
};