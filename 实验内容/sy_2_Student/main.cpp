#include <iostream>
#include <iomanip>
#include "Student.h"
using namespace std;
int main()
{
    int i;
    Student Stud[5] =   
    {
        Student("09170301","张三","男",90),
        Student("09170302","李四","男",91),
        Student("09170303","小夏","女",93),
        Student("09170304","王五","男",92),
        Student("09170305","小红","女",94),
    };
    cout << "输出5个学生的信息：" << endl;
    Student* p = &Stud[0];
    cout << left << setw(10) << "学号" << setw(10) << "姓名" << setw(10) << "性别" << setw(10) << "分数" << endl;
    for (i = 0; i < 5; i++)
    {
        (p + i)->display();
    };
    cout << "输出第1、3、5个学生的信息：" << endl;
    Student* p1 = &Stud[0];
    cout << left << setw(10) << "学号" << setw(10) << "姓名" << setw(10) << "性别" << setw(10) << "分数" << endl;
    for (i = 0; i < 5; i = i + 2)
    {
        (p1 + i)->display();
    };
    return 0;
}
