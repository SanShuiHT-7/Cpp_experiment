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
	 
	cout<<"������ѧ�ţ�";cin>>id;
	cout<<"������������";cin>>name;
	cout<<"���������䣺";cin>>age;
	cout<<"�������Ա�";cin>>sex;
	cout<<"�����뼮�᣺";cin>>jiguan;
}
void Student::display()
{
	cout<<"�������ѧ����ϢΪ��"<<"ѧ�ţ�"<<id<<" "<<"������"<<name<<" "<<"���䣺"<<age<<" "<<"�Ա�"<<sex<<" " <<"���᣺"<<jiguan<<" "<<endl; 
}
int main() {
	Student stud1;
	stud1.set();
	stud1.display();
	return 0;
}
