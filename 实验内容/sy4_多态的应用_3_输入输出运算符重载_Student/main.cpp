#include <iostream>
#include "Student.h"
using namespace std;
int main()
{
    Student stud1, stud2; 
    cout << "请输入学生学号、姓名、性别、分数信息：" << endl;;
    cin >> stud1;
    cout << "学生信息为："  << endl;
    cout << stud1;
    return 0;
}
