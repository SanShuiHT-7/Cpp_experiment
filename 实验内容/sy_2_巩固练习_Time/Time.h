#pragma once
#include <iostream>
using namespace std;
#ifndef TIME_H
#define TIME_H
class Time
{		//�������
private:	//��̬����==��������ݳ�Ա 
	int hour;
	int minute;
	int second;
public:  //��̬����==����ĺ�����Ա
	Time(int h, int m, int s);
	void printTime();

};

#endif // !TIME_H
