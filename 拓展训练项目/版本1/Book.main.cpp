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
	cout<<setw(20)<<"������ͼ���������";
	cin>>Temp1;
	b1.setName(Temp1);
	cout<<setw(20)<<"������ͼ��ĵ��ۣ�";
	cin>>Temp2;
	b1.setPrice(Temp2);
	cout<<setw(20)<<"������ͼ������ߣ�";
	cin>>Temp3;
	b1.setWriter(Temp3);
	cout<<"������"<<b1.get_name()<<" ";				//swtw(10)����������Ϊ10���ַ�
	cout<<"�۸�"<<b1.get_price()<<" ";
	cout<<"���ߣ�"<<b1.get_writer()<<" ";
    return 0;
}
