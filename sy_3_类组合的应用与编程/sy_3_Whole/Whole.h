#include<iostream>
using namespace std;
class Part
{
	private:
        int val;
    public:    
        Part();          //Part���޲ι��캯��    
        Part (int x);  	 // Part���вι��캯��    
        ~Part();         //Part����������

};
Part::Part()
{
    val=0;
    cout<<"Part���Ĭ�Ϲ��캯��������"<<endl;
}
Part::Part(int x)
{  
    val=x;
     cout<<"Part���һ�������Ĺ��캯��������"<<","<<val<<endl;
}
Part::~Part()
{
    cout<<"Part�����������������"<<","<<val<<endl;
}
class Whole
{
    private:   
        Part p1;  //Part�Ӷ���p1   
        Part p2; //Part�Ӷ���p2
    public:    
        Whole(int i);  // Whole���вι��캯��   
        Whole(){};     //Whole���޲ι��캯�� 
        ~Whole();      //Whole����������    
};
Whole::Whole(int i):p1(),p2(i)
{
    cout<<"Whole��Ĺ��캯��������"<<endl;
}
Whole::~Whole()
{
    cout<<"Whole�����������������"<<endl;
}

