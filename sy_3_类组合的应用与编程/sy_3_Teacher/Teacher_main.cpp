#include <iostream>
#include "Teacher.h"
using namespace std; 
int main()
{  
	Teacher tea1("09170303","°¢ÏÄ","Å®",2000,1,1);
	tea1.display(); 
	tea1.changeDate(2000,7,17);
	tea1.display();
	return 0;
}
