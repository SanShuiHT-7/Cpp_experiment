#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;
int main()
{
    int i;
    Student Stud[5] =   
    {
        Student("09170301","����","��",90),
        Student("09170302","����","��",91),
        Student("09170303","С��","Ů",93),
        Student("09170304","����","��",92),
        Student("09170305","С��","Ů",94),
    };
    cout << "���5��ѧ������Ϣ��" << endl;
    Student* p = &Stud[0];
    cout << left << setw(10) << "ѧ��" << setw(10) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << endl;
    for (i = 0; i < 5; i++)
    {
        (p + i)->display();
    };
    cout << "�����1��3��5��ѧ������Ϣ��" << endl;
    Student* p1 = &Stud[0];
    cout << left << setw(10) << "ѧ��" << setw(10) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << endl;
    for (i = 0; i < 5; i = i + 2)
    {
        (p1 + i)->display();
    };
    return 0;
}
