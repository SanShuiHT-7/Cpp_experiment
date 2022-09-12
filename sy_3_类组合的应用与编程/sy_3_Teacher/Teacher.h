#include <iostream>
using namespace std; 
//生日类
class BirthDate
{
  private:
    int year;		//年
    int month;		//月
    int day;		//日
  public:
    BirthDate(int y,int m,int d):year(y),month(m),day(d)	//使用初始化列表进行赋值
	{
        
	};
    void display1()	//打印输出生日
	{
		cout<<"生日："<<year<<"年"<<month<<"月" <<day<<"日"<<endl;
	};
    void changeDate(int y,int m,int d) //改变生日日期
	{
		year=y;
		month=m;
		day=d;
	}; 
};

//教师类
class Teacher
{
  private:
    string Tid;				//教师编号
    string Tname;			//教师姓名
    string Tsex;			//教师性别
    BirthDate Tbirthday;	 //教师生日 BirthDate类的对象作为数据成员
  public:
    Teacher(string id,string name,string sex,int y,int m,int d):
    	Tid(id),Tname(name),Tsex(sex),Tbirthday(y,m,d)//使用初始化列表进行赋值，生日日期来自Tbirthday类
		{
            
		};
    void display()
	{
		cout<<"教师号："<<Tid<<endl;
		cout<<"教师名："<<Tname<<endl;
		cout<<"性别："<<Tsex<<endl;
		Tbirthday.display1(); //调用BirthDate类中的dispaly1()，来输出内容
	};
    void changeDate(int y,int m,int d)//看似Teacher类改变生日日期，实质上是用Tbirthday来改变
	{
		Tbirthday.changeDate(y,m,d);
	};
};
