#pragma once
#include <iostream>
#include "BirthDate.h"
using namespace std;
#ifndef TEACHER_H
#define TEACHER_H
//教师类
class Teacher
{
private:
	string Tid;				//教师编号
	string Tname;			//教师姓名
	string Tsex;			//教师性别
	BirthDate Tbirthday;	 //教师生日 BirthDate类的对象作为数据成员
public:
	Teacher(string id, string name, string sex, int y, int m, int d);
	void display();
	void changeDate(int y, int m, int d);//看似Teacher类改变生日日期，实质上是用Tbirthday来改变

};

#endif // !TEACHER_H


