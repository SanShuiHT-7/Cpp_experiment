#pragma once
#include<iostream>
using namespace std;
#ifndef BIRTHDATE_H
#define BIRTHDATE_H
class BirthDate
{
private:
	int year;		//��
	int month;		//��
	int day;		//��
public:
	BirthDate(int y, int m, int d);
	void display1();
	void changeDate(int y, int m, int d);
};
#endif // !BIRTHDATE_H
