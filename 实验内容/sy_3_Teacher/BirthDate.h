#pragma once
#include<iostream>
using namespace std;
#ifndef BIRTHDATE_H
#define BIRTHDATE_H
class BirthDate
{
private:
	int year;		//Äê
	int month;		//ÔÂ
	int day;		//ÈÕ
public:
	BirthDate(int y, int m, int d);
	void display1();
	void changeDate(int y, int m, int d);
};
#endif // !BIRTHDATE_H
