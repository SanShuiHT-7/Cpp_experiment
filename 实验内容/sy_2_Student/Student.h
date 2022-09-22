#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
#ifndef STUDENT_H
#define STUDENT_H
class Student
{
private:
	string ID;
	string name;
	string sex;
	float score;

public:
	Student(string n, string na, string se, float s);
	void display();
};

#endif // !STUDENT_H
