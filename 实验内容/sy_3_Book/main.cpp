#include <iostream>
#include <iomanip>
#include "Book.h"
#include "BookList.h"
using namespace std;
int main()
{
	//初始化b1对象
	Book b1;
	string book_name,book_isbn,book_publisher,book_author,new_bookname;
	float book_price;
	BookList list;
	//设置flag值，用于控制循环
	char flag_insert = 'N', flag_search = 'N', flag_update = 'N', flag_delete = 'N';
	//添加图书,将信息存储在b1里面
	while (true)
	{
		cout << "请输入书名：";
		cin >> book_name;
		b1.setName(book_name);
		//判断输入价格的合法性
		unsigned long Bprice = 0;
		cout << "请输入图书价格：";
		cin >> book_price;
		string num_price;
		while (cin.fail())
		{
			cin.clear();//首先调用 istream 类的成员函数 clear() 来清空错误标志
			cin >> num_price;//通过 cin 和输入操作符 >> 将错误的输出保存在 string 类型的变量中，并且输出错误提示信息
			cout << "输入的" << num_price << "不是一个合理价格数，请重新输入一个数：";
			cin >> book_price;
		}
		b1.setPrice(book_price);
		cout << "请输入图书ISBN：";
		cin >> book_isbn;
		b1.setIsbn(book_isbn);
		cout << "请输入图书的出版社：";
		cin >> book_publisher;
		b1.setPublisher(book_publisher);
		cout << "请输入作者：";
		cin >> book_author;
		b1.setAuthor(book_author);
		//增加b1
		list.insert(b1);
		//打印所有书本信息
		list.showAll();
		//菜单控制
		cout << "是否继续录入图书（Y/N）：";
		cin >> flag_insert;
		if (!((flag_insert == 'Y' || (flag_insert == 'y'))))
		{
			cout << "已退出录入......" << endl;
			break;
		}
	}
	return 0;
}
