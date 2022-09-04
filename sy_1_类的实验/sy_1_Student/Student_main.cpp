#include <iostream>
#include <string>
using namespace std;
class Student
{
	private:
		int id;
		int age;
		string name;
		string sex;
		string jiguan;
	public:
		void set();
		void display();		
};
void Student::set()
{
	 
	cout<<"请输入学号：";cin>>id;
	cout<<"请输入姓名：";cin>>name;
	cout<<"请输入年龄：";cin>>age;
	cout<<"请输入性别：";cin>>sex;
	cout<<"请输入籍贯：";cin>>jiguan;
}
void Student::display()
{
	cout<<"您输入的学生信息为："<<"学号："<<id<<" "<<"姓名："<<name<<" "<<"年龄："<<age<<" "<<"性别："<<sex<<" " <<"籍贯："<<jiguan<<" "<<endl; 
}
int main() {
	Student stud1;
	stud1.set();
	stud1.display();
	return 0;
}
