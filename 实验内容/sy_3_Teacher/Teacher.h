#pragma once
#include <iostream>
#include "BirthDate.h"
using namespace std;
#ifndef TEACHER_H
#define TEACHER_H
//��ʦ��
class Teacher
{
private:
	string Tid;				//��ʦ���
	string Tname;			//��ʦ����
	string Tsex;			//��ʦ�Ա�
	BirthDate Tbirthday;	 //��ʦ���� BirthDate��Ķ�����Ϊ���ݳ�Ա
public:
	Teacher(string id, string name, string sex, int y, int m, int d);
	void display();
	void changeDate(int y, int m, int d);//����Teacher��ı��������ڣ�ʵ��������Tbirthday���ı�

};

#endif // !TEACHER_H


