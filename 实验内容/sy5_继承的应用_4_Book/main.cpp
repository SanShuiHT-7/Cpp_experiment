#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include "BookEList.h"
#include "PeriodicalsList.h"
using namespace std;
void Show()
{
	cout << "\n==========================\n";
	cout << "<<请选择您需要使用的系统>> \n";
	cout << "==========================\n";
	cout << "[         主菜单         ]\n";
	cout << "==========================\n";
	cout << "    【1.图书管理系统】\n\n";
	cout << "    【2.期刊管理系统】\n\n";
	cout << "    【0.退出系统】\n";
	cout << "==========================\n";
	cout << "请输入对应功能序号:\n";
}
//------------------------------------------------------------------------
void Show_Menu()
{
	cout << "\n===========================\n";
	cout << "  <<欢迎使用图书管理系统>>  \n";
	cout << "===========================\n";
	cout << "[         主菜单          ]\n";
	cout << "===========================\n";
	cout << "【1.添加图书】【2.打印书库】\n\n";
	cout << "【3.查找图书】【4.删除图书】\n\n";
	cout << "【5.修改图书】【6.返回上一级】\n\n";
	cout << "【7.退出系统】\n";
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
	cout << "7.[返回上一级] \n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}
void Show_LowMenu_delect()
{
	cout << "\n===========================\n";
	cout << "[         二级菜单        ]\n";
	cout << "===========================\n";
	cout << "1.[书名删除] 2.[ISBN删除]  \n\n";
	cout << "3.[序号删除] 4.[返回上一级]\n";
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
	cout << "5.[修改作者] 6.[返回上一级]\n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}
//------------------------------------------------------------------------
void Show_Menu_P()
{
	cout << "\n===========================\n";
	cout << "  <<欢迎使用期刊管理系统>>  \n";
	cout << "===========================\n";
	cout << "[         主菜单          ]\n";
	cout << "===========================\n";
	cout << "【1.添加期刊】【2.打印期库】\n\n";
	cout << "【3.查找期刊】【4.删除期刊】\n\n";
	cout << "【5.修改期刊】【6.返回上一级】\n\n";
	cout << "【7.退出系统】\n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}
void Show_LowMenu_select_P()
{
	cout << "\n===========================\n";
	cout << "[         二级菜单        ]\n";
	cout << "===========================\n";
	cout << "1.[刊名查询] 2.[价格查询]  \n\n";
	cout << "3.[单位查询] 4.[刊号查询]\n\n";
	cout << "5.[刊期查询] 6.[级别查询]\n\n";
	cout << "7.[序号查询] 8.[返回上一级] \n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}
void Show_LowMenu_delect_P()
{
	cout << "\n===========================\n";
	cout << "[         二级菜单        ]\n";
	cout << "===========================\n";
	cout << "1.[刊名删除] 2.[刊号删除]  \n\n";
	cout << "3.[序号删除] 4.[返回上一级]\n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}
void Show_LowMenu_update_P()
{
	cout << "\n===========================\n";
	cout << "[         二级菜单        ]\n";
	cout << "===========================\n";
	cout << "1.[修改刊名] 2.[修改价格]\n\n";
	cout << "3.[修改单位] 4.[修改刊号]\n\n";
	cout << "5.[修改刊期] 6.[修改级别]\n\n";
	cout << "7.[返回上一级]\n";
	cout << "===========================\n";
	cout << "请输入对应功能序号:\n";
}
int main()
{
	string book_name, book_isbn, book_publisher, book_author;
	string new_bookname, new_bookisbn, new_bookpublisher, new_bookauthor;
	float book_price;
	float new_bookprice;
	BookE b1;//初始化b1对象,书本
	BookEList list;//初始化list对象，书本的各项信息
	string Periodicals_name, Periodicals_CA, Periodicals_CN, Periodicals_Issue, Periodicals_Level;
	string new_Pname, new_PCA, new_PCN, new_PIssue, new_PLevel;
	float P_price;
	float new_Pprice;
	Periodicals P1;
	PeriodicalsList Plist;
	char flag_insert = 'Y', flag_search = 'Y', flag_update = 'Y', flag_delete = 'Y';//设置flag值，用于控制循环
	int k;
	LOOPXX:Show();
	cin >> k;
	system("cls");
	if (k == 0 || k == 1 || k == 2)
	{
		if (k == 1)
		{
			while (1)
			{
				//利用switch语句实现图书管理系统菜单
				
				LOOP:Show_Menu();
				cin >> k;
				if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6||k==7)

				{
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
						cout << "功能：2.【打印书库】" << endl;
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
						LOOP3:Show_LowMenu_select();
							cin >> k;
							if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6 || k == 7)
							{
								switch (k)
								{
								case 1:
								{
									system("cls");
									cout << "功能：1.[书名查找]" << endl;
									cout << "请输入需要查找的图书名：";
									cin >> book_name;
									int sel_1 = list.search_name(book_name);
									if (sel_1 >= 0)
									{
										system("cls");
										cout << "查询到以下图书：" << endl;
										list.showBook_title();
										list.showBook(sel_1);
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
									int sel_2 = list.search_price(book_price);
									if (sel_2 >= 0)
									{

										system("cls");
										cout << "查询到以下图书：" << endl;
										list.showBook_title();
										list.showBook(sel_2);
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
									int sel_3 = list.search_isbn(book_isbn);
									if (sel_3 >= 0)
									{

										system("cls");
										cout << "查询到以下图书：" << endl;
										list.showBook_title();
										list.showBook(sel_3);
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
									int sel_4 = list.search_publisher(book_publisher);
									if (sel_4 >= 0)
									{

										system("cls");
										cout << "查询到以下图书：" << endl;
										list.showBook_title();
										list.showBook(sel_4);
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
									int sel_5 = list.search_author(book_author);
									if (sel_5 >= 0)
									{

										system("cls");
										cout << "查询到以下图书：" << endl;
										list.showBook_title();
										list.showBook(sel_5);
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
									int sel_6;
									cin >> sel_6;
									system("cls");
									cout << "查询到以下图书：" << endl;
									list.showBook(sel_6 - 1);
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
							else
							{
								system("cls");
								cout << "请输入正确的功能序号\n";
								goto LOOP3;
							}

						}

					}
					case 4:
					{
						cout << "功能：4.【删除图书】" << endl;
						system("cls");
						while (1)
						{
						LOOP4: Show_LowMenu_delect();
							cin >> k;
							if (k == 1 || k == 2 || k == 3 || k == 4)
							{
								switch (k)
								{
								case 1:
								{
									system("cls");
									cout << "功能：1.[书名删除]" << endl;
									cout << "请输入需要删除的书名：";
									cin >> book_name;
									int del_1 = list.search_name(book_name);
									if (del_1 >= 0)
									{
										list.deleted(del_1);
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
									int del_2 = list.search_isbn(book_isbn);
									if (del_2 >= 0)
									{
										list.deleted(del_2);
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
									int del_3;
									cin >> del_3;
									list.deleted(del_3 - 1);
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
							else
							{
								system("cls");
								cout << "请输入正确的功能序号\n";
								goto LOOP4;
							}

						}
					}
					case 5:
					{
						cout << "功能：5.【修改图书】" << endl;
						system("cls");
						while (1)
						{
						LOOP5: Show_LowMenu_update();
							cin >> k;
							if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6)
							{
								switch (k)
								{
								case 1:
								{
									system("cls");
									cout << "功能：1.[修改书名]" << endl;
									cout << "请输入需要修改的图书名：";
									cin >> book_name;
									int upd_1 = list.search_name(book_name);//查找要修改的相应图书信息
									BookE b = list.bookInfor(upd_1);//返回该本图书的信息
									if (upd_1 >= 0)
									{
										cout << "请输入该图书新的图书名：";
										cin >> new_bookname;
										b.setName(new_bookname);
										list.update(upd_1, b);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										list.showBook_title();
										list.showBook(upd_1);
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
									cout << "功能：2.[修改价格]" << endl;
									cout << "请输入需要修改价格的图书ISBN：";//因为isbn能够确定是哪本书
									cin >> book_isbn;
									int upd_2 = list.search_isbn(book_isbn);//查找要修改的相应图书信息
									BookE b = list.bookInfor(upd_2);//返回该本图书的信息
									if (upd_2 >= 0)
									{
										cout << "请输入该图书新的价格：";
										cin >> new_bookprice;
										b.setPrice(new_bookprice);
										list.update(upd_2, b);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										list.showBook_title();
										list.showBook(upd_2);
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
									cout << "功能：3.[修改isbn]" << endl;
									cout << "请输入需要修改的ISBN：";//因为isbn能够确定是哪本书
									cin >> book_isbn;
									int upd_3 = list.search_isbn(book_isbn);//查找要修改的相应图书信息
									BookE b = list.bookInfor(upd_3);//返回该本图书的信息
									if (upd_3 >= 0)
									{
										cout << "请输入该图书新的ISBN：";
										cin >> new_bookisbn;
										b.setIsbn(new_bookisbn);
										list.update(upd_3, b);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										list.showBook_title();
										list.showBook(upd_3);
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
									cout << "功能：4.[修改出版社]" << endl;
									cout << "请输入需要修改出版社的图书ISBN：";//因为isbn能够确定是哪本书
									cin >> book_isbn;
									int upd_4 = list.search_isbn(book_isbn);//查找要修改的相应图书信息
									BookE b = list.bookInfor(upd_4);//返回该本图书的信息
									if (upd_4 >= 0)
									{
										cout << "请输入该图书新的出版社名：";
										cin >> new_bookpublisher;
										b.setPublisher(new_bookpublisher);
										list.update(upd_4, b);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										list.showBook_title();
										list.showBook(upd_4);
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
									cout << "功能：5.[修改作者]" << endl;
									cout << "请输入需要修改作者的图书ISBN：";//因为isbn能够确定是哪本书
									cin >> book_isbn;
									int upd_5 = list.search_isbn(book_isbn);//查找要修改的相应图书信息
									BookE b = list.bookInfor(upd_5);//返回该本图书的信息
									if (upd_5 >= 0)
									{
										cout << "请输入该图书新的作者名：";
										cin >> new_bookauthor;
										b.setAuthor(new_bookauthor);
										list.update(upd_5, b);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										list.showBook_title();
										list.showBook(upd_5);
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
							else
							{
								system("cls");
								cout << "请输入正确的功能序号\n";
								goto LOOP5;
							}

						}

					}
					case 6:
					{
						system("cls");
						goto LOOPXX;
					}
					case 7:
					{
						system("cls");
						cout << "已退出系统" << endl;
						exit(0);
					}
					int n = getchar();
					}
				}
				else
				{
					system("cls");
					cout << "请输入正确的功能序号\n";
					goto LOOP;
				}
			}
		}	
		if (k == 2)
		{
			while (1)
			{

				//利用switch语句实现期刊管理系统菜单
				LOOPX:Show_Menu_P();
				cin >> k;
				if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6||k==7)
				{
					switch (k)
					{
					case 1:
					{
						cout << "功能：1.【添加期刊】" << endl;
						system("cls");
						cin >> P1;//插入流重载
						cout << "是否录入该期刊（Y/N）:";
						cin >> flag_insert;
						if (((flag_insert == 'Y') || (flag_insert == 'y')))
						{
							Plist.insert(P1);
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
						cout << "功能：2.【打印刊库】" << endl;
						system("cls");
						Plist.showAll_P();
						break;
					}
					case 3:
					{
						cout << "功能：3.【查找期刊】" << endl;
						system("cls");
						while (1)
						{
						LOOPX3:Show_LowMenu_select_P();
							cin >> k;
							if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6 || k == 7||k==8)
							{
								switch (k)
								{
								case 1:
								{
									system("cls");
									cout << "功能：1.[刊名查找]" << endl;
									cout << "请输入需要查找的期刊名：";
									cin >> Periodicals_name;
									int sel_1 = Plist.search_name(Periodicals_name);
									if (sel_1 >= 0)
									{
										system("cls");
										cout << "查询到以下期刊：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_1);
									}
									else
									{
										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 2:
								{
									system("cls");
									cout << "功能：2.[价格查找]" << endl;
									cout << "请输入需要查找的期刊价格：";
									cin >> P_price;
									int sel_2 = Plist.search_price(P_price);
									if (sel_2 >= 0)
									{

										system("cls");
										cout << "查询到以下期刊：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_2);
									}
									else
									{

										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 3:
								{
									system("cls");
									cout << "功能：3.[单位查找]" << endl;
									cout << "请输入需要查找的单位：";
									cin >> Periodicals_CA;
									int sel_3 = Plist.search_CA(Periodicals_CA);
									if (sel_3 >= 0)
									{

										system("cls");
										cout << "查询到以下期刊：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_3);
									}
									else
									{

										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 4:
								{
									system("cls");
									cout << "功能：4.[刊号查找]" << endl;
									cout << "请输入需要查找的期刊号：";
									cin >> Periodicals_CN;
									int sel_4 = Plist.search_CN(Periodicals_CN);
									if (sel_4 >= 0)
									{

										system("cls");
										cout << "查询到以下期刊：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_4);
									}
									else
									{

										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 5:
								{
									system("cls");
									cout << "功能：5.[刊期查找]" << endl;
									cout << "请输入需要查找的刊期：";
									cin >> Periodicals_Issue;
									int sel_5 = Plist.search_Issue(Periodicals_Issue);
									if (sel_5 >= 0)
									{

										system("cls");
										cout << "查询到以下期刊：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_5);
									}
									else
									{

										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 6:
								{
									system("cls");
									cout << "功能：6.[级别查找]" << endl;
									cout << "请输入需要查找的级别：";
									cin >> Periodicals_Level;
									int sel_6 = Plist.search_Level(Periodicals_Level);
									if (sel_6 >= 0)
									{

										system("cls");
										cout << "查询到以下期刊：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_6);
									}
									else
									{

										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 7:
								{
									system("cls");
									cout << "功能：6.[序号查询]" << endl;
									cout << "请输入需要查找的期刊序号：";
									int sel_7;
									cin >> sel_7;
									system("cls");
									cout << "查询到以下期刊：" << endl;
									Plist.showPeriodicals(sel_7 - 1);
									break;
								}
								case 8:
								{
									system("cls");
									goto LOOPX;

								}
								int n = getchar();
								}
							}
							else
							{
								system("cls");
								cout << "请输入正确的功能序号\n";
								goto LOOPX3;
							}

						}

					}
					case 4:
					{
						cout << "功能：4.【删除期刊】" << endl;
						system("cls");
						while (1)
						{
						LOOPX4: Show_LowMenu_delect_P();
							cin >> k;
							if (k == 1 || k == 2 || k == 3 || k == 4)
							{
								switch (k)
								{
								case 1:
								{
									system("cls");
									cout << "功能：1.[刊名删除]" << endl;
									cout << "请输入需要删除的刊名：";
									cin >> Periodicals_name;
									int del_1 = Plist.search_name(Periodicals_name);
									if (del_1 >= 0)
									{
										Plist.deleted(del_1);
										system("cls");
										cout << "期刊已删除" << endl;
									}
									else
									{
										system("cls");
										cout << "没有找到该期刊" << endl;
									}
									break;
								}
								case 2:
								{
									system("cls");
									cout << "功能：2.[刊号删除]" << endl;
									cout << "请输入需要删除的刊号：";
									cin >> Periodicals_CN;
									int del_2 = Plist.search_CN(Periodicals_CN);
									if (del_2 >= 0)
									{
										Plist.deleted(del_2);
										system("cls");
										cout << "期刊已删除" << endl;
									}
									else
									{
										system("cls");
										cout << "没有找到该期刊" << endl;
									}
									break;
								}
								case 3:
								{
									system("cls");
									cout << "功能：3.[序号删除]" << endl;
									cout << "请输入需要删除的期刊序号：";
									int del_3;
									cin >> del_3;
									Plist.deleted(del_3 - 1);
									system("cls");
									cout << "该期刊已删除";
									break;
								}
								case 4:
								{
									system("cls");
									goto LOOPX;
								}
								int n = getchar();
								}
							}
							else
							{
								system("cls");
								cout << "请输入正确的功能序号\n";
								goto LOOPX4;
							}

						}
					}
					case 5:
					{
						cout << "功能：5.【修改期刊】" << endl;
						system("cls");
						while (1)
						{
						LOOPX5: Show_LowMenu_update_P();
							cin >> k;
							if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6 || k == 7)
							{
								switch (k)
								{
								case 1:
								{
									system("cls");
									cout << "功能：1.[修改书名]" << endl;
									cout << "请输入需要修改的期刊名：";
									cin >> Periodicals_name;
									int upd_1 = Plist.search_name(Periodicals_name);//查找要修改的相应期刊信息
									Periodicals p = Plist.PeriodicalsInfor(upd_1);//返回该本期刊的信息
									if (upd_1 >= 0)
									{
										cout << "请输入该期刊新的期刊名：";
										cin >> new_Pname;
										p.setName(new_Pname);
										Plist.update(upd_1, p);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_1);
									}
									else
									{
										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 2:
								{
									system("cls");
									cout << "功能：2.[修改价格]" << endl;
									cout << "请输入需要修改价格的刊号：";//因为CN能够确定是哪本书
									cin >> Periodicals_CN;
									int upd_2 = Plist.search_CN(Periodicals_CN);//查找要修改的相应期刊信息
									Periodicals b = Plist.PeriodicalsInfor(upd_2);//返回该本期刊的信息
									if (upd_2 >= 0)
									{
										cout << "请输入该期刊新的价格：";
										cin >> new_Pprice;
										b.setPrice(new_Pprice);
										Plist.update(upd_2, b);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_2);
									}
									else
									{
										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 3:
								{
									system("cls");
									cout << "功能：3.[修改单位]" << endl;
									cout << "请输入需要修改单位刊号：";//因为CN能够确定是哪本书
									cin >> Periodicals_CN;
									int upd_3 = Plist.search_CN(Periodicals_CN);//查找要修改的相应期刊信息
									Periodicals p = Plist.PeriodicalsInfor(upd_3);//返回该本期刊的信息
									if (upd_3 >= 0)
									{
										cout << "请输入该期刊新的单位：";
										cin >> new_PCA;
										p.setCA(new_PCA);
										Plist.update(upd_3, p);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_3);
									}
									else
									{
										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 4:
								{
									system("cls");
									cout << "功能：4.[修改刊号]" << endl;
									cout << "请输入需要修改的刊号：";//因为CN能够确定是哪本书
									cin >> Periodicals_CN;
									int upd_3 = Plist.search_CN(Periodicals_CN);//查找要修改的相应期刊信息
									Periodicals p = Plist.PeriodicalsInfor(upd_3);//返回该本期刊的信息
									if (upd_3 >= 0)
									{
										cout << "请输入该期刊新的刊号：";
										cin >> new_PCN;
										p.setCN(new_PCN);
										Plist.update(upd_3, p);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_3);
									}
									else
									{
										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 5:
								{
									system("cls");
									cout << "功能：4.[修改刊期]" << endl;
									cout << "请输入需要修改期刊的刊号：";//因为isbn能够确定是哪本书
									cin >> Periodicals_CN;
									int upd_5 = Plist.search_CN(Periodicals_CN);//查找要修改的相应期刊信息
									Periodicals p = Plist.PeriodicalsInfor(upd_5);//返回该本期刊的信息
									if (upd_5 >= 0)
									{
										cout << "请输入该期刊新的刊期：";
										cin >> new_PIssue;
										p.setIssue(new_PIssue);
										Plist.update(upd_5, p);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_5);
									}
									else
									{
										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 6:
								{
									system("cls");
									cout << "功能：4.[修改级别]" << endl;
									cout << "请输入需要修改级别的刊号：";//因为isbn能够确定是哪本书
									cin >> Periodicals_CN;
									int upd_6 = Plist.search_CN(Periodicals_CN);//查找要修改的相应期刊信息
									Periodicals p = Plist.PeriodicalsInfor(upd_6);//返回该本期刊的信息
									if (upd_6 >= 0)
									{
										cout << "请输入该期刊新的刊期：";
										cin >> new_PLevel;
										p.setLevel(new_PLevel);
										Plist.update(upd_6, p);
										system("cls");
										cout << "已修改，信息如下：" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_6);
									}
									else
									{
										system("cls");
										cout << "没有找到该期刊信息" << endl;
									}
									break;
								}
								case 7:
								{
									system("cls");
									goto LOOPX;
								}
								int n = getchar();
								}
							}
							else
							{
								system("cls");
								cout << "请输入正确的功能序号\n";
								goto LOOPX5;
							}

						}
					}
					case 6:
					{
						system("cls");
						goto LOOPXX;
					}
					case 7:
					{
							system("cls");
							cout << "已退出系统" << endl;
							exit(0);
					}
					int n = getchar();
					}
				}
				else
				{
					system("cls");
					cout << "请输入正确的功能序号\n";
					goto LOOPX;
				}
			}
			
		}
		if (k == 0)
		{
			system("cls");
			cout << "您已退出系统...\n";
		}
	}
	else
		{
		system("cls");
		cout << "请输入正确的功能序号\n";
		goto LOOPXX;
		}
	return 0;
}
