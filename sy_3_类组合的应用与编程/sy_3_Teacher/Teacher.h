#include <iostream>
using namespace std; 
//教师类
class Teacher
{
  private:
    string Tid;				//教师编号
    string Tname;			//教师姓名
    string Tsex;			//教师性别
    BirthDate Tbirthday;	 //教师生日 BirthDate类的对象作为数据成员
  public:
    Teacher(string id,string name,string sex,string bir);	//赋值
    Tbirthday(y,m,d),Tid(id),Tname(name),Tsex(sex);
    void display1();
    void changeDate(int y,int m,int d);//改变生日日期
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
	cout<<"教师号："<<Tid<<endl;
	cout<<"教师名："<<Tname<<endl;
	cout<<"性别："<<Tsex<<endl;
	Tbirthday.display(); 
}
void changeDate(int y,int m,int d)
{
	Tbirthday.changeDate(y,m,d);
}

//生日类
class BirthDate
{
  private:
    int year;		//年
    int month;		//月
    int day;		//日
  public:
    BirthDate(int y,int m,int d):year(y),month(m),day(d);//赋值
    void display();
    void changeDate(int y,int m,int d);  //改变生日日期
};
BirthDate::BirthDate(int y,int m,int d):year(y),month(m),day(d)
{
	year=y;
	month=m;
	day=d;
}
void BirthDate::display()
{
	cout<<year<<"年"<<month<<"月" <<day<<"日";
}
void BirthDate::changeDate(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}


