#include <iostream>
using namespace std; 
//������
class BirthDate
{
  private:
    int year;		//��
    int month;		//��
    int day;		//��
  public:
    BirthDate(int y,int m,int d):year(y),month(m),day(d)	//ʹ�ó�ʼ���б���и�ֵ
	{
        
	};
    void display1()	//��ӡ�������
	{
		cout<<"���գ�"<<year<<"��"<<month<<"��" <<day<<"��"<<endl;
	};
    void changeDate(int y,int m,int d) //�ı���������
	{
		year=y;
		month=m;
		day=d;
	}; 
};

//��ʦ��
class Teacher
{
  private:
    string Tid;				//��ʦ���
    string Tname;			//��ʦ����
    string Tsex;			//��ʦ�Ա�
    BirthDate Tbirthday;	 //��ʦ���� BirthDate��Ķ�����Ϊ���ݳ�Ա
  public:
    Teacher(string id,string name,string sex,int y,int m,int d):
    	Tid(id),Tname(name),Tsex(sex),Tbirthday(y,m,d)//ʹ�ó�ʼ���б���и�ֵ��������������Tbirthday��
		{
            
		};
    void display()
	{
		cout<<"��ʦ�ţ�"<<Tid<<endl;
		cout<<"��ʦ����"<<Tname<<endl;
		cout<<"�Ա�"<<Tsex<<endl;
		Tbirthday.display1(); //����BirthDate���е�dispaly1()�����������
	};
    void changeDate(int y,int m,int d)//����Teacher��ı��������ڣ�ʵ��������Tbirthday���ı�
	{
		Tbirthday.changeDate(y,m,d);
	};
};
