#include <iostream>
using namespace std;
class Time						
{		//类的主体
private:	//静态属性==》类的数据成员 
	int hour;
    int minute;
    int second;
public:  //动态功能==》类的函数成员
	Time(int h,int m,int s);
    void printTime();
    
};
Time::Time(int h=1,int m=1,int s=1)
{
	hour=h;
	minute=m;
	second=s;
}
void Time::printTime()
{
    cout<<"时间为："<<hour<<"时"<<minute<<"分"<<second<<"秒"<<endl;
}
