#include<iostream>
using namespace std;
class Part
{
    public:    
        Part();          //Part的无参构造函数    
        Part (int x);  // Part的有参构造函数    
        ~Part();        //Part的析构函数
    private:
        int val;
};
Part::Part()
{
    val=0;
    cout<<"Part类的默认构造函数被调用"<<endl;
}
Part::Part(int x)
{  
    val=x;
     cout<<"Part类的一个参数的构造函数被调用"<<","<<val<<endl;
}
Part::~Part()
{
    cout<<"Part类的析构函数被调用"<<","<<val<<endl;
}
class Whole
{
    public:    
        Whole(int i);  // Whole的有参构造函数   
        Whole(){};     //Whole的无参构造函数 
        ~Whole();      //Whole的析构函数    
    private:   
        Part p1;  //子对象    
        Part p2; //子对象
};
Whole::Whole(int i):p1(),p2(i)
{
    cout<<"Whole类的构造函数被调用"<<endl;
}
Whole::~Whole()
{
    cout<<"Whole类的析构函数被调用"<<endl;
}

