#include <iostream>
using namespace std; 
//��ʦ��
class Teacher
{
  private:
    string Tid;				//��ʦ���
    string Tname;			//��ʦ����
    string Tsex;			//��ʦ�Ա�
    BirthDate Tbirthday;	 //��ʦ���� BirthDate��Ķ�����Ϊ���ݳ�Ա
  public:
    Teacher(string id,string name,string sex,string bir);	//��ֵ
    Tbirthday(y,m,d),Tid(id),Tname(name),Tsex(sex);
    void display1();
    void changeDate(int y,int m,int d);//�ı���������
};
Teacher::Teacher(string id,string name,string sex,string bir)
{
	Tid=id;
	Tname=name;
	Tsex=sex;
	Tbirthday=bir;
}
Teacher::Tbirthday(y,m,d),Tid(id),Tname(name),Tsex(sex)
{
	
}
void  Teacher::display1()
{
	cout<<"��ʦ�ţ�"<<Tid<<endl;
	cout<<"��ʦ����"<<Tname<<endl;
	cout<<"�Ա�"<<Tsex<<endl;
	Tbirthday.display(); 
}
void changeDate(int y,int m,int d)
{
	Tbirthday.changeDate(y,m,d);
}

//������
class BirthDate
{
  private:
    int year;		//��
    int month;		//��
    int day;		//��
  public:
    BirthDate(int y,int m,int d):year(y),month(m),day(d);//��ֵ
    void display();
    void changeDate(int y,int m,int d);  //�ı���������
};
BirthDate::BirthDate(int y,int m,int d):year(y),month(m),day(d)
{
	year=y;
	month=m;
	day=d;
}
void BirthDate::display()
{
	cout<<year<<"��"<<month<<"��" <<day<<"��";
}
void BirthDate::changeDate(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}


