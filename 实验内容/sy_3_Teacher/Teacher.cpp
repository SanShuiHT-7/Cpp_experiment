#include "Teacher.h"
Teacher::Teacher(string id, string name, string sex, int y, int m, int d) :
	Tid(id), Tname(name), Tsex(sex), Tbirthday(y, m, d)//ʹ�ó�ʼ���б���и�ֵ��������������Tbirthday��
{

};
void Teacher::display()
{
	cout << "��ʦ�ţ�" << Tid << endl;
	cout << "��ʦ����" << Tname << endl;
	cout << "�Ա�" << Tsex << endl;
	Tbirthday.display1(); //����BirthDate���е�dispaly1()�����������
};
void Teacher::changeDate(int y, int m, int d)//����Teacher��ı��������ڣ�ʵ��������Tbirthday���ı�
{
	Tbirthday.changeDate(y, m, d);
}