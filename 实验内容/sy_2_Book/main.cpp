#include <iostream>
#include <iomanip>

#include "Book.h"
using namespace std;
//对象数组
Book bookList[10];//设置存放空间大小为10
int bookNum = 0, i = 0, j = 0;//设置计数初值 
void insert(Book b)
{
	bookList[bookNum].setName(b.get_name());//依次添加图书信息 
	bookList[bookNum].setPrice(b.get_price());
	bookList[bookNum].setIsbn(b.get_isbn());
	bookList[bookNum].setPuvlisher(b.get_puvlisher());
	bookList[bookNum].setAuthor(b.get_author());
	bookNum++;
}
//输出书本信息 
void showBook(int i)
{
	cout << left << setw(15) << bookList[i].get_name() << setw(15) << bookList[i].get_price() << setw(15) << bookList[i].get_isbn() << setw(15) << bookList[i].get_puvlisher() << setw(15) << bookList[i].get_author() << endl;

}
int main() {
	string Bname, Bisbn, Bpuvlisher, Bauthor;
	float Bprice;
	char flag = 'N';
	int j;

	while (true)
	{
		cout << "请输入图书名：";
		cin >> Bname;
		//Bprice 的类型是 unsigned long ，如果此时输入的不是数字，则 cin.fail() 函数的返回值是 true 。 
		unsigned long Bprice = 0;
		cout << "请输入图书价格：";
		cin >> Bprice;
		string num_Bprice;
		while (cin.fail())
		{
			cin.clear();//首先调用 istream 类的成员函数 clear() 来清空错误标志
			cin >> num_Bprice;//通过 cin 和输入操作符 >> 将错误的输出保存在 string 类型的变量中，并且输出错误提示信息
			cout << "输入的" << num_Bprice << "不是一个合理价格数，请重新输入一个数：";
			cin >> Bprice;
		}
		cout << "请输入图书ISBN：";
		cin >> Bisbn;
		cout << "请输入图书出版社：";
		cin >> Bpuvlisher;
		cout << "请输入图书作者：";
		cin >> Bauthor;
		Book b(Bname, Bprice, Bisbn, Bpuvlisher, Bauthor);
		insert(b);//加入书 
		cout << endl;
		cout << "图书系统已有一下书籍：" << endl;
		cout << left << setw(15) << "书名" << setw(15) << "价格" << setw(15) << "ISBN" << setw(15) << "出版社" << setw(15) << "作者" << endl;
		j = bookNum;
		for (bookNum = 0; bookNum < j; bookNum++)
		{
			showBook(bookNum);
		}
		cout << endl;
		cout << "是否继续录入图书（Y/N）:";
		cin >> flag;
		if (((flag == 'N') || (flag == 'n')))
		{
			cout << "已退出录入......" << endl;
			break;
		}
	}
}

