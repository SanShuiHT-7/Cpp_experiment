#include <iostream>
#include "Book.h"
using namespace std;
int main(){
	Book b1;
	b1.setName("���μ�");
	b1.setPrice(30);
	cout<<"������"<<"��"<<b1.get_name()<<"��"<<endl;
	cout<<"�۸�"<<b1.get_price()<<"Ԫ"<<endl; 
	return 0; 
}
