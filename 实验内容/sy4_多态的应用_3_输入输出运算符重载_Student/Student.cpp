#include "Student.h"
istream& operator>>(istream& input, Student& stud)
{
    input >> stud.id >> stud.name >> stud.sex >> stud.score;
    return input;
}
ostream& operator<<(ostream& output,  Student& stud)
{
	output << "ѧ��:" << stud.id <<" " << " ����:" << stud.name << " " << "�Ա�:" << stud.sex << " " << "�ɼ�:" << stud.score << endl;;
	return output;
}