#include "Teacher.h"
Teacher::Teacher(string id, string name, string sex, int y, int m, int d) :
	Tid(id), Tname(name), Tsex(sex), Tbirthday(y, m, d)//使用初始化列表进行赋值，生日日期来自Tbirthday类
{

};
void Teacher::display()
{
	cout << "教师号：" << Tid << endl;
	cout << "教师名：" << Tname << endl;
	cout << "性别：" << Tsex << endl;
	Tbirthday.display1(); //调用BirthDate类中的dispaly1()，来输出内容
};
void Teacher::changeDate(int y, int m, int d)//看似Teacher类改变生日日期，实质上是用Tbirthday来改变
{
	Tbirthday.changeDate(y, m, d);
}