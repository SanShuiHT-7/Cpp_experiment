#include <iostream>
#include "Student.h"
using namespace std; 
int main()
{
	int i;
    Student Stud[5]=
    {
    	Student("101","����",90),
    	Student("102","����",91),
    	Student("103","����",92),
    	Student("104","С��",93),
    	Student("105","С��",94),
	};
	cout<<"���5��ѧ������Ϣ��"<<endl;
    Student * p=&Stud[0];
    for(i=0;i<5;i++)
    {
        (p+i)->display();
    };
    cout<<"�����1��3��5��ѧ������Ϣ��"<<endl;
    Student * p1=&Stud[0];
    for(i=0;i<5;i=i+2)
    {
        (p1+i)->display();
    };
    return 0;
}
