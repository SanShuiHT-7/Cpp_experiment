#include "Student.h"
istream& operator>>(istream& input, Student& stud)
{
    input >> stud.id >> stud.name >> stud.sex >> stud.score;
    return input;
}
ostream& operator<<(ostream& output,  Student& stud)
{
	output << "学号:" << stud.id <<" " << " 姓名:" << stud.name << " " << "性别:" << stud.sex << " " << "成绩:" << stud.score << endl;;
	return output;
}