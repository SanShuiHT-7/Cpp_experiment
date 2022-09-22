#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Book.h"
#include "BookList.h"
using namespace std;
int main()
{
	
	Book b1;//初始化b1对象
	string book_name,book_isbn,book_publisher,book_author,new_bookname;
	float book_price;
	BookList list;
	string num_price;//判断价格合法性
	unsigned long Bprice = 0;
	char flag_insert = 'Y', flag_search = 'Y', flag_update = 'Y', flag_delete = 'Y';//设置flag值，用于控制循环
	int k;
	while(1)
	{
		
		//利用switch语句实现图书管理系统菜单
		cout << "\n\n    欢迎使用图书管理系统\n";
		cout << "****************************\n";
		cout << "*          主菜单          *\n";
		cout << "****************************\n\n";
		cout << "1.【图书录入】	2.【打印图书】\n\n";
		cout << "3.【书名查找】	4.【序号查找】\n\n";
		cout << "5.【书名删除】	6.【序号删除】\n\n";
		cout << "7.【修改书名】	8.【退出系统】\n\n";
		cout << "请输入对应功能序号:\n";
		cin >> k;
		switch (k)
		{
		case 1:
		{
			cout << "功能：【图书录入】" << endl;
			cout << "请输入书名：";
			cin >> book_name;
			b1.setName(book_name);
			//判断输入价格的合法性
			cout << "请输入图书价格：";
			cin >> book_price;
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
			cout << "是否录入该图书（Y/N）:";
			cin >> flag_insert;
			if (((flag_insert == 'Y') || (flag_insert == 'y')))
			{
				list.insert(b1);
				cout << "已经录入该书本" << endl;
				break;
			}
			else
			{
				cout << "未录入" << endl;
				break;
			}
		}
			
		case 2:
		{
			cout << "功能：【打印图书】" << endl;
			list.showAll();
			break;
		}
			
		case 3: 
		{
			cout << "功能：【书名查找】" << endl;
			cout << "请输入需要查找的图书：";
			cin >> book_name;
			int x1 = list.search(book_name);
			if (x1 >= 0)
			{
				list.showBook(x1);
			}
			else
			{
				cout << "没有找到该图书信息" << endl;
			}
			break;
		}
			
		case 4:
		{
			cout << "功能：【序号查找】" << endl;
			cout << "请输入需要查找的图书序号：";
			int i1;
			cin >> i1;
			cout << "你所查找的信息如下：" << endl;
			list.showBook(i1-1);
			break;
		}
			
		case 5:
		{
			cout << "功能：【书名删除】" << endl;
			cout << "请输入需要删除的书名：";
			cin >> book_name;
			int x2 = list.search(book_name);
			if (x2 >= 0)
			{
				list.deleted(x2);
				cout << "图书已删除" << endl;
			}
			else
			{
				cout << "没有找到该图书" << endl;
			}
			break;
		}
			
		case 6:
		{
			cout << "功能：【序号删除】" << endl;
			cout << "请输入需要删除的图书序号：";
			int i2;
			cin >> i2;
			list.deleted(i2-1);
			cout << "该图书已删除";
			break;
		}
			
		case 7:
		{
			cout << "功能：【修改书名】" << endl;
			cout << "请输入需要修改的图书名：";
			cin >> book_name;
			int x3 = list.search(book_name);//查找要修改的相应图书信息
			Book b = list.bookInfor(x3);//返回该本图书的信息
			if (x3 >= 0)
			{
				cout << "请输入该图书新的图书名：";
				cin >> new_bookname;
				b.setName(new_bookname);
				list.update(x3, b);
				cout << "已修改，信息如下：" << endl;
				list.showBook(x3);
			}
			else
			{
				cout << "没有找到该图书信息" << endl;
			}
			break;
		}
			
		case 8:
			cout << "已退出系统" << endl;
			exit(0);
		}

	int n = getchar();
	}
	return 0;
}
