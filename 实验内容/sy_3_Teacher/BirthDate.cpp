#include "BirthDate.h"
BirthDate::BirthDate(int y, int m, int d) :year(y), month(m), day(d)	//ʹ�ó�ʼ���б���и�ֵ
{

};
void BirthDate::display1()	//��ӡ�������
{
	cout << "���գ�" << year << "��" << month << "��" << day << "��" << endl;
};
void BirthDate::changeDate(int y, int m, int d) //�ı���������
{
	year = y;
	month = m;
	day = d;
};