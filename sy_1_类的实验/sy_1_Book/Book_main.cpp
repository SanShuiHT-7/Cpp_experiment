#include <iostream>
#include "Book.h"
using namespace std;
int main(){
	Book b1;
	b1.setName("三体");
	b1.setPrice(70);
	cout<<"书名："<<"《"<<b1.get_name()<<"》"<<endl;
	cout<<"价格："<<b1.get_price()<<"元"<<endl; 
	return 0; 
}
