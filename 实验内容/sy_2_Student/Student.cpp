#include "Student.h"
Student::Student(string n, string na, string se, float s)
{
	ID = n;
	name = na;
	sex = se;
	score = s;
}
void Student::display()
{
	cout << left << setw(10) << ID << setw(10) << name << setw(10) << sex << setw(10) << score << endl;
}
