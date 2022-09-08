#include <iostream>
#include "Student.h"
using namespace std; 
int main()
{
	int i;
    Student Stud[5]=
    {
    	Student("101","张三",90),
    	Student("102","李四",91),
    	Student("103","王五",92),
    	Student("104","小明",93),
    	Student("105","小刚",94),
	};
	cout<<"输出5个学生的信息："<<endl;
    Student * p=&Stud[0];
    for(i=0;i<5;i++)
    {
        (p+i)->display();
    };
    cout<<"输出第1、3、5个学生的信息："<<endl;
    Student * p1=&Stud[0];
    for(i=0;i<5;i=i+2)
    {
        (p1+i)->display();
    };
    return 0;
}
