#include "Time.h"
Time::Time(int h = 1, int m = 1, int s = 1)
{
	hour = h;
	minute = m;
	second = s;
}
void Time::printTime()
{
	cout << "ʱ��Ϊ��" << hour << "ʱ" << minute << "��" << second << "��" << endl;
}
