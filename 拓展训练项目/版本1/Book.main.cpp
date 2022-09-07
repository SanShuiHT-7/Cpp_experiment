#include <iostream>
#include<iomanip> 
#include <string>
#include "Book.h"
using namespace std;
int main()
{
    Book b1;
    string Temp1;
    float Temp2;
    string Temp3;
	cout<<setw(20)<<"请输入图书的书名：";
	cin>>Temp1;
	b1.setName(Temp1);
	cout<<setw(20)<<"请输入图书的单价：";
	cin>>Temp2;
	b1.setPrice(Temp2);
	cout<<setw(20)<<"请输入图书的作者：";
	cin>>Temp3;
	b1.setWriter(Temp3);
	cout<<"书名："<<b1.get_name()<<" ";				//swtw(10)设置输出域宽为10个字符
	cout<<"价格："<<b1.get_price()<<" ";
	cout<<"作者："<<b1.get_writer()<<" ";
    return 0;
}
