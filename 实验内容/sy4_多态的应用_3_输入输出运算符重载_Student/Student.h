#pragma once
#include <iostream>
using namespace std;
#ifndef STUDENT_H
#define STUDENT_H
class Student
{
private:
	string id;
	string name;
	string sex;
	float score;

public:

	friend istream& operator>>(istream&, Student&);
	friend ostream& operator<<(ostream&, Student&);
};

#endif // !STUDENT_H
