#include <iostream>
using namespace std;
class Time						
{		//�������
private:	//��̬����==��������ݳ�Ա 
	int hour;
    int minute;
    int second;
public:  //��̬����==����ĺ�����Ա
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
    cout<<"ʱ��Ϊ��"<<hour<<"ʱ"<<minute<<"��"<<second<<"��"<<endl;
}
