#include "Time.h"
Time::Time(int h = 1, int m = 1, int s = 1)
{
	hour = h;
	minute = m;
	second = s;
}
void Time::printTime()
{
	cout << "时间为：" << hour << "时" << minute << "分" << second << "秒" << endl;
}
