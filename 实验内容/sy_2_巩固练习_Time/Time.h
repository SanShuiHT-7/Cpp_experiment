#pragma once
#include <iostream>
using namespace std;
#ifndef TIME_H
#define TIME_H
class Time
{		//类的主体
private:	//静态属性==》类的数据成员 
	int hour;
	int minute;
	int second;
public:  //动态功能==》类的函数成员
	Time(int h, int m, int s);
	void printTime();

};

#endif // !TIME_H
