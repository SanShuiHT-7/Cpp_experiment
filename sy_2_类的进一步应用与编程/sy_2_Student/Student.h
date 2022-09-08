#include <iostream>
using namespace std; 
class Student	
{
private:
	string ID;	                                                                            
	string name; 
    float score;    

public:				 
	Student(string n,string na,float s);	 
    void display();          		
};
Student::Student(string n,string na,float s)
{
    ID=n;
	name=na;
	score=s;
}
void Student::display()
{
    cout<<ID<<","<<name<<","<<score<<endl;
}
