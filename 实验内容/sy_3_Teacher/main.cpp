#include <iostream>
#include "Teacher.h"
using namespace std;
int main()
{
	Teacher tea1("09170303", "����", "Ů", 2000, 1, 1);
	cout << "�޸�ǰ��Ϣ��" << endl;
	tea1.display();
	cout << endl;
	tea1.changeDate(2000, 7, 17);
	cout << "�޸ĺ���Ϣ��" << endl;
	tea1.display();
	return 0;
}
