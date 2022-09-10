#include <iostream>
#include <iomanip>
#include "Book.h"
using namespace std;
//对象数组
Book bookList[10];//设置存放空间大小为100 
int bookNum=0,i=0,j=0;//设置计数初值 
void insert(Book b)//加入书 
{
	bookList[bookNum].setName(b.get_name());
	bookList[bookNum].setPrice(b.get_price());
	bookList[bookNum].setIsbn(b.get_isbn());
	bookList[bookNum].setPuvlisher(b.get_puvlisher());
	bookList[bookNum].setAuthor(b.get_author());
	bookNum++;
}
void showBook(int i)
{
	cout<<left<<setw(15)<<bookList[i].get_name()<<setw(15)<<bookList[i].get_price()<<setw(15)<<bookList[i].get_isbn()<<setw(15)<<bookList[i].get_puvlisher()<<setw(15)<<bookList[i].get_author()<<endl;
	
} 
using namespace std;
int main(){
	string Bname,Bisbn,Bpuvlisher,Bauthor;
	float Bprice;
	char flag='N';
	while(true)
	{ 
		cout<<"请输入图书名：";
		cin>>Bname; 
		cout<<"请输入图书价格：";
		cin>>Bprice;
		string num_Bprice;

		if (!cin)
		{
			cout<<"请输入正确价格......"<<endl;
		}
		cout<<"请输入图书ISBN：";
		cin>>Bisbn;
		cout<<"请输入图书出版社：";
		cin>>Bpuvlisher;
		cout<<"请输入图书作者：";
		cin>>Bauthor;
		Book b(Bname,Bprice,Bisbn,Bpuvlisher,Bauthor);
		insert(b);//加入书 
		cout<<endl; 
		cout<<"图书系统已有一下书籍："<<endl; 
		cout<<left<<setw(15)<<"书名"<<setw(15)<<"价格"<<setw(15)<<"ISBN"<<setw(15)<<"出版社"<<setw(15)<<"作者"<<endl;
		j=bookNum;
		for(bookNum=0;bookNum<j;bookNum++) 
		{
			showBook(bookNum);
		}
		cout<<endl; 
		cout<<"是否继续录入图书（Y/N）:";
		cin>>flag;
		if(((flag=='N')||(flag=='n')))
		{
			break;
		}
	} 
}

