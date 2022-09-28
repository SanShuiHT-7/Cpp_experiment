#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include "Book.h"
#include "BookList.h"
using namespace std;
void Show_Menu()
{
	cout << "\n===========================\n";
	cout << "  <<欢迎使用图书管理系统>>  \n";
	cout << "===========================\n";
	cout << "[         主菜单          ]\n";
	cout << "===========================\n";
	cout << "【1.添加图书】【2.打印书库】\n\n";
	cout << "【3.查找图书】【4.删除图书】\n\n";
	cout << "【5.修改图书】【6.退出系统】\n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}
void Show_LowMenu_select()
{
	cout << "\n===========================\n";
	cout << "[         二级菜单        ]\n";
	cout << "===========================\n";
	cout << "1.[书名查询] 2.[价格查询]  \n\n";
	cout << "3.[ISBN查询] 4.[出版社查询]\n\n";
	cout << "5.[作者查询] 6.[序号查询]\n\n";
	cout << "7.[返回主菜单] \n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}
void Show_LowMenu_delect()
{
	cout << "\n===========================\n";
	cout << "[         二级菜单        ]\n";
	cout << "===========================\n";
	cout << "1.[书名删除] 2.[ISBN删除]  \n\n";
	cout << "3.[序号删除] 4.[返回主菜单]\n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}
void Show_LowMenu_update()
{
	cout << "\n===========================\n";
	cout << "[         二级菜单        ]\n";
	cout << "===========================\n";
	cout << "1.[修改书名] 2.[修改价格]  \n\n";
	cout << "3.[修改ISBN] 4.[修改出版社]\n\n";
	cout << "5.[修改作者] 6.[返回主菜单]\n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}

int main()
{
	string book_name, book_isbn, book_publisher, book_author;
	string new_bookname, new_bookisbn, new_bookpublisher, new_bookauthor;
	float book_price;
	float new_bookprice;
	Book b1;//初始化b1对象,书本
	BookList list;//初始化list对象，书本的各项信息
	char flag_insert = 'Y', flag_search = 'Y', flag_update = 'Y', flag_delete = 'Y';//设置flag值，用于控制循环
	int k;
	while (1)
	{

		//利用switch语句实现图书管理系统菜单

		LOOP:Show_Menu();
		cin >> k;
		switch (k)
		{
		case 1:
			{
			cout << "功能：1.【图书录入】" << endl;
			system("cls");
			cin >> b1;//插入流重载
			cout << "是否录入该图书（Y/N）:";
			cin >> flag_insert;
			if (((flag_insert == 'Y') || (flag_insert == 'y')))
			{
				list.insert(b1);
				system("cls");
				cout << "已经录入该书本" << endl;
				break;
			}
			else
			{
				system("cls");
				cout << "未录入" << endl;
				break;
			}
		}
		case 2:
			{
			cout << "功能：2.【打印图书】" << endl;
			system("cls");
			list.showAll();
			break;
		}
		case 3:
			{
			cout << "功能：3.【查找图书】" << endl;
			system("cls");
			while (1)
			{
				Show_LowMenu_select();
				cin >> k;
				switch (k)
				{
				case 1:
				{
					system("cls");
					cout << "功能：1.[书名查找]" << endl;
					cout << "请输入需要查找的图书名：";
					cin >> book_name;
					int x1 = list.search_name(book_name);
					if (x1 >= 0)
					{
						system("cls");
						cout << "查询到以下图书：" << endl;
						list.showBook_title();
						list.showBook(x1);
					}
					else
					{
						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 2:
				{
					system("cls");
					cout << "功能：2.[价格查找]" << endl;
					cout << "请输入需要查找的图书价格：";
					cin >> book_price;
					int x1 = list.search_price(book_price);
					if (x1 >= 0)
					{

						system("cls");
						cout << "查询到以下图书：" << endl;
						list.showBook_title();
						list.showBook(x1);
					}
					else
					{

						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 3:
				{
					system("cls");
					cout << "功能：3.[ISBN查找]" << endl;
					cout << "请输入需要查找的ISBN：";
					cin >> book_isbn;
					int x1 = list.search_isbn(book_isbn);
					if (x1 >= 0)
					{

						system("cls");
						cout << "查询到以下图书：" << endl;
						list.showBook_title();
						list.showBook(x1);
					}
					else
					{

						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 4:
				{
					system("cls");
					cout << "功能：4.[出版社查找]" << endl;
					cout << "请输入需要查找的出版社名：";
					cin >> book_publisher;
					int x1 = list.search_publisher(book_publisher);
					if (x1 >= 0)
					{

						system("cls");
						cout << "查询到以下图书：" << endl;
						list.showBook_title();
						list.showBook(x1);
					}
					else
					{

						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 5:
				{
					system("cls");
					cout << "功能：5.[作者查找]" << endl;
					cout << "请输入需要查找的作者名：";
					cin >> book_author;
					int x1 = list.search_author(book_author);
					if (x1 >= 0)
					{

						system("cls");
						cout << "查询到以下图书：" << endl;
						list.showBook_title();
						list.showBook(x1);
					}
					else
					{
						
						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 6:
				{
					system("cls");
					cout << "功能：6.[序号查询]" << endl;
					cout << "请输入需要查找的图书序号：";
					int i1;
					cin >> i1;
					system("cls");
					cout << "查询到以下图书：" << endl;
					list.showBook(i1 - 1);
					break;
				}
				case 7:
				{
					system("cls");
					goto LOOP;

				}
				int n = getchar();
				}
			}

		}
		case 4:
			{
			cout << "功能：4.【删除图书】" << endl;
			system("cls");
			while (1)
			{
				Show_LowMenu_delect();
				cin >> k;
				switch (k)
				{
				case 1:
				{
					system("cls");
					cout << "功能：1.[书名删除]" << endl;
					cout << "请输入需要删除的书名：";
					cin >> book_name;
					int x4 = list.search_name(book_name);
					if (x4 >= 0)
					{
						list.deleted(x4);
						system("cls");
						cout << "图书已删除" << endl;
					}
					else
					{
						system("cls");
						cout << "没有找到该图书" << endl;
					}
					break;
				}
				case 2:
				{
					system("cls");
					cout << "功能：2.[ISBN删除]" << endl;
					cout << "请输入需要删除的ISBN：";
					cin >> book_isbn;
					int x1 = list.search_isbn(book_isbn);
					if (x1 >= 0)
					{
						list.deleted(x1);
						system("cls");
						cout << "图书已删除" << endl;
					}
					else
					{
						system("cls");
						cout << "没有找到该图书" << endl;
					}
					break;
				}
				case 3:
				{
					system("cls");
					cout << "功能：3.[序号删除]" << endl;
					cout << "请输入需要删除的图书序号：";
					int j;
					cin >> j;
					list.deleted(j - 1);
					system("cls");
					cout << "该图书已删除";
					break;
				}
				case 4:
				{
					system("cls");
					goto LOOP;
				}
				int n = getchar();
				}
			}
		}
		case 5:
		{
			cout << "功能：5.【修改图书】" << endl;
			system("cls");
			while (1)
			{
				Show_LowMenu_update();
				cin >> k;
				switch (k)
				{
				case 1:
				{
					system("cls");
					cout << "功能：1.[修改书名]" << endl;
					cout << "请输入需要修改的图书名：";
					cin >> book_name;
					int x3 = list.search_name(book_name);//查找要修改的相应图书信息
					Book b = list.bookInfor(x3);//返回该本图书的信息
					if (x3 >= 0)
					{
						cout << "请输入该图书新的图书名：";
						cin >> new_bookname;
						b.setName(new_bookname);
						list.update(x3, b);
						system("cls");
						cout << "已修改，信息如下：" << endl;
						list.showBook_title();
						list.showBook(x3);
					}
					else
					{
						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 2:
				{
					cout << "功能：2.[修改价格]" << endl;
					cout << "请输入需要修改价格的图书ISBN：";//因为isbn能够确定是哪本书
					cin >> book_isbn;
					int x3 = list.search_isbn(book_isbn);//查找要修改的相应图书信息
					Book b = list.bookInfor(x3);//返回该本图书的信息
					if (x3 >= 0)
					{
						cout << "请输入该图书新的价格：";
						cin >> new_bookprice;
						b.setPrice(new_bookprice);
						list.update(x3, b);
						system("cls");
						cout << "已修改，信息如下：" << endl;
						list.showBook_title();
						list.showBook(x3);
					}
					else
					{
						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 3:
				{
					cout << "功能：3.[修改isbn]" << endl;
					cout << "请输入需要修改的ISBN：";//因为isbn能够确定是哪本书
					cin >> book_isbn;
					int x3 = list.search_isbn(book_isbn);//查找要修改的相应图书信息
					Book b = list.bookInfor(x3);//返回该本图书的信息
					if (x3 >= 0)
					{
						cout << "请输入该图书新的ISBN：";
						cin >> new_bookisbn;
						b.setIsbn(new_bookisbn);
						list.update(x3, b);
						system("cls");
						cout << "已修改，信息如下：" << endl;
						list.showBook_title();
						list.showBook(x3);
					}
					else
					{
						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 4:
				{
					cout << "功能：4.[修改出版社]" << endl;
					cout << "请输入需要修改出版社的图书ISBN：";//因为isbn能够确定是哪本书
					cin >> book_isbn;
					int x3 = list.search_isbn(book_isbn);//查找要修改的相应图书信息
					Book b = list.bookInfor(x3);//返回该本图书的信息
					if (x3 >= 0)
					{
						cout << "请输入该图书新的出版社名：";
						cin >> new_bookpublisher;
						b.setPublisher(new_bookpublisher);
						list.update(x3, b);
						system("cls");
						cout << "已修改，信息如下：" << endl;
						list.showBook_title();
						list.showBook(x3);
					}
					else
					{
						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 5:
				{
					cout << "功能：5.[修改作者]" << endl;
					cout << "请输入需要修改作者的图书ISBN：";//因为isbn能够确定是哪本书
					cin >> book_isbn;
					int x3 = list.search_isbn(book_isbn);//查找要修改的相应图书信息
					Book b = list.bookInfor(x3);//返回该本图书的信息
					if (x3 >= 0)
					{
						cout << "请输入该图书新的作者名：";
						cin >> new_bookauthor;
						b.setAuthor(new_bookauthor);
						list.update(x3, b);
						system("cls");
						cout << "已修改，信息如下：" << endl;
						list.showBook_title();
						list.showBook(x3);
					}
					else
					{
						system("cls");
						cout << "没有找到该图书信息" << endl;
					}
					break;
				}
				case 6:
				{
					system("cls");
					goto LOOP;
				}
				int n = getchar();
				}
			}

		}
		case 6:
		{
			system("cls");
			cout << "已退出系统" << endl;
			exit(0);
		}
		int n = getchar();
		}
	}
	return 0;
}