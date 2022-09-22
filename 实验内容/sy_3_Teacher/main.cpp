#include <iostream>
#include "Teacher.h"
using namespace std;
int main()
{
	Teacher tea1("09170303", "阿夏", "女", 2000, 1, 1);
	cout << "修改前信息：" << endl;
	tea1.display();
	cout << endl;
	tea1.changeDate(2000, 7, 17);
	cout << "修改后信息：" << endl;
	tea1.display();
	return 0;
}
