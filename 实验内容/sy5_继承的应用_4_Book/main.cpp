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
	cout << "<<��ѡ������Ҫʹ�õ�ϵͳ>> \n";
	cout << "==========================\n";
	cout << "[         ���˵�         ]\n";
	cout << "==========================\n";
	cout << "    ��1.ͼ�����ϵͳ��\n\n";
	cout << "    ��2.�ڿ�����ϵͳ��\n\n";
	cout << "    ��0.�˳�ϵͳ��\n";
	cout << "==========================\n";
	cout << "�������Ӧ�������:\n";
}
//------------------------------------------------------------------------
void Show_Menu()
{
	cout << "\n===========================\n";
	cout << "  <<��ӭʹ��ͼ�����ϵͳ>>  \n";
	cout << "===========================\n";
	cout << "[         ���˵�          ]\n";
	cout << "===========================\n";
	cout << "��1.���ͼ�顿��2.��ӡ��⡿\n\n";
	cout << "��3.����ͼ�顿��4.ɾ��ͼ�顿\n\n";
	cout << "��5.�޸�ͼ�顿��6.������һ����\n\n";
	cout << "��7.�˳�ϵͳ��\n";
	cout << "===========================\n";
	cout << "�������Ӧ�������:\n";
}
void Show_LowMenu_select()
{
	cout << "\n===========================\n";
	cout << "[         �����˵�        ]\n";
	cout << "===========================\n";
	cout << "1.[������ѯ] 2.[�۸��ѯ]  \n\n";
	cout << "3.[ISBN��ѯ] 4.[�������ѯ]\n\n";
	cout << "5.[���߲�ѯ] 6.[��Ų�ѯ]\n\n";
	cout << "7.[������һ��] \n";
	cout << "===========================\n";
	cout << "�������Ӧ�������:\n";
}
void Show_LowMenu_delect()
{
	cout << "\n===========================\n";
	cout << "[         �����˵�        ]\n";
	cout << "===========================\n";
	cout << "1.[����ɾ��] 2.[ISBNɾ��]  \n\n";
	cout << "3.[���ɾ��] 4.[������һ��]\n";
	cout << "===========================\n";
	cout << "�������Ӧ�������:\n";
}
void Show_LowMenu_update()
{
	cout << "\n===========================\n";
	cout << "[         �����˵�        ]\n";
	cout << "===========================\n";
	cout << "1.[�޸�����] 2.[�޸ļ۸�]  \n\n";
	cout << "3.[�޸�ISBN] 4.[�޸ĳ�����]\n\n";
	cout << "5.[�޸�����] 6.[������һ��]\n";
	cout << "===========================\n";
	cout << "�������Ӧ�������:\n";
}
//------------------------------------------------------------------------
void Show_Menu_P()
{
	cout << "\n===========================\n";
	cout << "  <<��ӭʹ���ڿ�����ϵͳ>>  \n";
	cout << "===========================\n";
	cout << "[         ���˵�          ]\n";
	cout << "===========================\n";
	cout << "��1.����ڿ�����2.��ӡ�ڿ⡿\n\n";
	cout << "��3.�����ڿ�����4.ɾ���ڿ���\n\n";
	cout << "��5.�޸��ڿ�����6.������һ����\n\n";
	cout << "��7.�˳�ϵͳ��\n";
	cout << "===========================\n";
	cout << "�������Ӧ�������:\n";
}
void Show_LowMenu_select_P()
{
	cout << "\n===========================\n";
	cout << "[         �����˵�        ]\n";
	cout << "===========================\n";
	cout << "1.[������ѯ] 2.[�۸��ѯ]  \n\n";
	cout << "3.[��λ��ѯ] 4.[���Ų�ѯ]\n\n";
	cout << "5.[���ڲ�ѯ] 6.[�����ѯ]\n\n";
	cout << "7.[��Ų�ѯ] 8.[������һ��] \n";
	cout << "===========================\n";
	cout << "�������Ӧ�������:\n";
}
void Show_LowMenu_delect_P()
{
	cout << "\n===========================\n";
	cout << "[         �����˵�        ]\n";
	cout << "===========================\n";
	cout << "1.[����ɾ��] 2.[����ɾ��]  \n\n";
	cout << "3.[���ɾ��] 4.[������һ��]\n";
	cout << "===========================\n";
	cout << "�������Ӧ�������:\n";
}
void Show_LowMenu_update_P()
{
	cout << "\n===========================\n";
	cout << "[         �����˵�        ]\n";
	cout << "===========================\n";
	cout << "1.[�޸Ŀ���] 2.[�޸ļ۸�]\n\n";
	cout << "3.[�޸ĵ�λ] 4.[�޸Ŀ���]\n\n";
	cout << "5.[�޸Ŀ���] 6.[�޸ļ���]\n\n";
	cout << "7.[������һ��]\n";
	cout << "===========================\n";
	cout << "�������Ӧ�������:\n";
}
int main()
{
	string book_name, book_isbn, book_publisher, book_author;
	string new_bookname, new_bookisbn, new_bookpublisher, new_bookauthor;
	float book_price;
	float new_bookprice;
	BookE b1;//��ʼ��b1����,�鱾
	BookEList list;//��ʼ��list�����鱾�ĸ�����Ϣ
	string Periodicals_name, Periodicals_CA, Periodicals_CN, Periodicals_Issue, Periodicals_Level;
	string new_Pname, new_PCA, new_PCN, new_PIssue, new_PLevel;
	float P_price;
	float new_Pprice;
	Periodicals P1;
	PeriodicalsList Plist;
	char flag_insert = 'Y', flag_search = 'Y', flag_update = 'Y', flag_delete = 'Y';//����flagֵ�����ڿ���ѭ��
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
				//����switch���ʵ��ͼ�����ϵͳ�˵�
				
				LOOP:Show_Menu();
				cin >> k;
				if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6||k==7)

				{
					switch (k)
					{
					case 1:
					{
						cout << "���ܣ�1.��ͼ��¼�롿" << endl;
						system("cls");
						cin >> b1;//����������
						cout << "�Ƿ�¼���ͼ�飨Y/N��:";
						cin >> flag_insert;
						if (((flag_insert == 'Y') || (flag_insert == 'y')))
						{
							list.insert(b1);
							system("cls");
							cout << "�Ѿ�¼����鱾" << endl;
							break;
						}
						else
						{
							system("cls");
							cout << "δ¼��" << endl;
							break;
						}
					}
					case 2:
					{
						cout << "���ܣ�2.����ӡ��⡿" << endl;
						system("cls");
						list.showAll();
						break;
					}
					case 3:
					{
						cout << "���ܣ�3.������ͼ�顿" << endl;
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
									cout << "���ܣ�1.[��������]" << endl;
									cout << "��������Ҫ���ҵ�ͼ������";
									cin >> book_name;
									int sel_1 = list.search_name(book_name);
									if (sel_1 >= 0)
									{
										system("cls");
										cout << "��ѯ������ͼ�飺" << endl;
										list.showBook_title();
										list.showBook(sel_1);
									}
									else
									{
										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
									}
									break;
								}
								case 2:
								{
									system("cls");
									cout << "���ܣ�2.[�۸����]" << endl;
									cout << "��������Ҫ���ҵ�ͼ��۸�";
									cin >> book_price;
									int sel_2 = list.search_price(book_price);
									if (sel_2 >= 0)
									{

										system("cls");
										cout << "��ѯ������ͼ�飺" << endl;
										list.showBook_title();
										list.showBook(sel_2);
									}
									else
									{

										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
									}
									break;
								}
								case 3:
								{
									system("cls");
									cout << "���ܣ�3.[ISBN����]" << endl;
									cout << "��������Ҫ���ҵ�ISBN��";
									cin >> book_isbn;
									int sel_3 = list.search_isbn(book_isbn);
									if (sel_3 >= 0)
									{

										system("cls");
										cout << "��ѯ������ͼ�飺" << endl;
										list.showBook_title();
										list.showBook(sel_3);
									}
									else
									{

										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
									}
									break;
								}
								case 4:
								{
									system("cls");
									cout << "���ܣ�4.[���������]" << endl;
									cout << "��������Ҫ���ҵĳ���������";
									cin >> book_publisher;
									int sel_4 = list.search_publisher(book_publisher);
									if (sel_4 >= 0)
									{

										system("cls");
										cout << "��ѯ������ͼ�飺" << endl;
										list.showBook_title();
										list.showBook(sel_4);
									}
									else
									{

										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
									}
									break;
								}
								case 5:
								{
									system("cls");
									cout << "���ܣ�5.[���߲���]" << endl;
									cout << "��������Ҫ���ҵ���������";
									cin >> book_author;
									int sel_5 = list.search_author(book_author);
									if (sel_5 >= 0)
									{

										system("cls");
										cout << "��ѯ������ͼ�飺" << endl;
										list.showBook_title();
										list.showBook(sel_5);
									}
									else
									{

										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
									}
									break;
								}
								case 6:
								{
									system("cls");
									cout << "���ܣ�6.[��Ų�ѯ]" << endl;
									cout << "��������Ҫ���ҵ�ͼ����ţ�";
									int sel_6;
									cin >> sel_6;
									system("cls");
									cout << "��ѯ������ͼ�飺" << endl;
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
								cout << "��������ȷ�Ĺ������\n";
								goto LOOP3;
							}

						}

					}
					case 4:
					{
						cout << "���ܣ�4.��ɾ��ͼ�顿" << endl;
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
									cout << "���ܣ�1.[����ɾ��]" << endl;
									cout << "��������Ҫɾ����������";
									cin >> book_name;
									int del_1 = list.search_name(book_name);
									if (del_1 >= 0)
									{
										list.deleted(del_1);
										system("cls");
										cout << "ͼ����ɾ��" << endl;
									}
									else
									{
										system("cls");
										cout << "û���ҵ���ͼ��" << endl;
									}
									break;
								}
								case 2:
								{
									system("cls");
									cout << "���ܣ�2.[ISBNɾ��]" << endl;
									cout << "��������Ҫɾ����ISBN��";
									cin >> book_isbn;
									int del_2 = list.search_isbn(book_isbn);
									if (del_2 >= 0)
									{
										list.deleted(del_2);
										system("cls");
										cout << "ͼ����ɾ��" << endl;
									}
									else
									{
										system("cls");
										cout << "û���ҵ���ͼ��" << endl;
									}
									break;
								}
								case 3:
								{
									system("cls");
									cout << "���ܣ�3.[���ɾ��]" << endl;
									cout << "��������Ҫɾ����ͼ����ţ�";
									int del_3;
									cin >> del_3;
									list.deleted(del_3 - 1);
									system("cls");
									cout << "��ͼ����ɾ��";
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
								cout << "��������ȷ�Ĺ������\n";
								goto LOOP4;
							}

						}
					}
					case 5:
					{
						cout << "���ܣ�5.���޸�ͼ�顿" << endl;
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
									cout << "���ܣ�1.[�޸�����]" << endl;
									cout << "��������Ҫ�޸ĵ�ͼ������";
									cin >> book_name;
									int upd_1 = list.search_name(book_name);//����Ҫ�޸ĵ���Ӧͼ����Ϣ
									BookE b = list.bookInfor(upd_1);//���ظñ�ͼ�����Ϣ
									if (upd_1 >= 0)
									{
										cout << "�������ͼ���µ�ͼ������";
										cin >> new_bookname;
										b.setName(new_bookname);
										list.update(upd_1, b);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										list.showBook_title();
										list.showBook(upd_1);
									}
									else
									{
										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
									}
									break;
								}
								case 2:
								{
									system("cls");
									cout << "���ܣ�2.[�޸ļ۸�]" << endl;
									cout << "��������Ҫ�޸ļ۸��ͼ��ISBN��";//��Ϊisbn�ܹ�ȷ�����ı���
									cin >> book_isbn;
									int upd_2 = list.search_isbn(book_isbn);//����Ҫ�޸ĵ���Ӧͼ����Ϣ
									BookE b = list.bookInfor(upd_2);//���ظñ�ͼ�����Ϣ
									if (upd_2 >= 0)
									{
										cout << "�������ͼ���µļ۸�";
										cin >> new_bookprice;
										b.setPrice(new_bookprice);
										list.update(upd_2, b);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										list.showBook_title();
										list.showBook(upd_2);
									}
									else
									{
										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
									}
									break;
								}
								case 3:
								{
									system("cls");
									cout << "���ܣ�3.[�޸�isbn]" << endl;
									cout << "��������Ҫ�޸ĵ�ISBN��";//��Ϊisbn�ܹ�ȷ�����ı���
									cin >> book_isbn;
									int upd_3 = list.search_isbn(book_isbn);//����Ҫ�޸ĵ���Ӧͼ����Ϣ
									BookE b = list.bookInfor(upd_3);//���ظñ�ͼ�����Ϣ
									if (upd_3 >= 0)
									{
										cout << "�������ͼ���µ�ISBN��";
										cin >> new_bookisbn;
										b.setIsbn(new_bookisbn);
										list.update(upd_3, b);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										list.showBook_title();
										list.showBook(upd_3);
									}
									else
									{
										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
									}
									break;
								}
								case 4:
								{
									system("cls");
									cout << "���ܣ�4.[�޸ĳ�����]" << endl;
									cout << "��������Ҫ�޸ĳ������ͼ��ISBN��";//��Ϊisbn�ܹ�ȷ�����ı���
									cin >> book_isbn;
									int upd_4 = list.search_isbn(book_isbn);//����Ҫ�޸ĵ���Ӧͼ����Ϣ
									BookE b = list.bookInfor(upd_4);//���ظñ�ͼ�����Ϣ
									if (upd_4 >= 0)
									{
										cout << "�������ͼ���µĳ���������";
										cin >> new_bookpublisher;
										b.setPublisher(new_bookpublisher);
										list.update(upd_4, b);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										list.showBook_title();
										list.showBook(upd_4);
									}
									else
									{
										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
									}
									break;
								}
								case 5:
								{
									system("cls");
									cout << "���ܣ�5.[�޸�����]" << endl;
									cout << "��������Ҫ�޸����ߵ�ͼ��ISBN��";//��Ϊisbn�ܹ�ȷ�����ı���
									cin >> book_isbn;
									int upd_5 = list.search_isbn(book_isbn);//����Ҫ�޸ĵ���Ӧͼ����Ϣ
									BookE b = list.bookInfor(upd_5);//���ظñ�ͼ�����Ϣ
									if (upd_5 >= 0)
									{
										cout << "�������ͼ���µ���������";
										cin >> new_bookauthor;
										b.setAuthor(new_bookauthor);
										list.update(upd_5, b);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										list.showBook_title();
										list.showBook(upd_5);
									}
									else
									{
										system("cls");
										cout << "û���ҵ���ͼ����Ϣ" << endl;
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
								cout << "��������ȷ�Ĺ������\n";
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
						cout << "���˳�ϵͳ" << endl;
						exit(0);
					}
					int n = getchar();
					}
				}
				else
				{
					system("cls");
					cout << "��������ȷ�Ĺ������\n";
					goto LOOP;
				}
			}
		}	
		if (k == 2)
		{
			while (1)
			{

				//����switch���ʵ���ڿ�����ϵͳ�˵�
				LOOPX:Show_Menu_P();
				cin >> k;
				if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6||k==7)
				{
					switch (k)
					{
					case 1:
					{
						cout << "���ܣ�1.������ڿ���" << endl;
						system("cls");
						cin >> P1;//����������
						cout << "�Ƿ�¼����ڿ���Y/N��:";
						cin >> flag_insert;
						if (((flag_insert == 'Y') || (flag_insert == 'y')))
						{
							Plist.insert(P1);
							system("cls");
							cout << "�Ѿ�¼����鱾" << endl;
							break;
						}
						else
						{
							system("cls");
							cout << "δ¼��" << endl;
							break;
						}
					}
					case 2:
					{
						cout << "���ܣ�2.����ӡ���⡿" << endl;
						system("cls");
						Plist.showAll_P();
						break;
					}
					case 3:
					{
						cout << "���ܣ�3.�������ڿ���" << endl;
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
									cout << "���ܣ�1.[��������]" << endl;
									cout << "��������Ҫ���ҵ��ڿ�����";
									cin >> Periodicals_name;
									int sel_1 = Plist.search_name(Periodicals_name);
									if (sel_1 >= 0)
									{
										system("cls");
										cout << "��ѯ�������ڿ���" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_1);
									}
									else
									{
										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 2:
								{
									system("cls");
									cout << "���ܣ�2.[�۸����]" << endl;
									cout << "��������Ҫ���ҵ��ڿ��۸�";
									cin >> P_price;
									int sel_2 = Plist.search_price(P_price);
									if (sel_2 >= 0)
									{

										system("cls");
										cout << "��ѯ�������ڿ���" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_2);
									}
									else
									{

										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 3:
								{
									system("cls");
									cout << "���ܣ�3.[��λ����]" << endl;
									cout << "��������Ҫ���ҵĵ�λ��";
									cin >> Periodicals_CA;
									int sel_3 = Plist.search_CA(Periodicals_CA);
									if (sel_3 >= 0)
									{

										system("cls");
										cout << "��ѯ�������ڿ���" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_3);
									}
									else
									{

										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 4:
								{
									system("cls");
									cout << "���ܣ�4.[���Ų���]" << endl;
									cout << "��������Ҫ���ҵ��ڿ��ţ�";
									cin >> Periodicals_CN;
									int sel_4 = Plist.search_CN(Periodicals_CN);
									if (sel_4 >= 0)
									{

										system("cls");
										cout << "��ѯ�������ڿ���" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_4);
									}
									else
									{

										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 5:
								{
									system("cls");
									cout << "���ܣ�5.[���ڲ���]" << endl;
									cout << "��������Ҫ���ҵĿ��ڣ�";
									cin >> Periodicals_Issue;
									int sel_5 = Plist.search_Issue(Periodicals_Issue);
									if (sel_5 >= 0)
									{

										system("cls");
										cout << "��ѯ�������ڿ���" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_5);
									}
									else
									{

										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 6:
								{
									system("cls");
									cout << "���ܣ�6.[�������]" << endl;
									cout << "��������Ҫ���ҵļ���";
									cin >> Periodicals_Level;
									int sel_6 = Plist.search_Level(Periodicals_Level);
									if (sel_6 >= 0)
									{

										system("cls");
										cout << "��ѯ�������ڿ���" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(sel_6);
									}
									else
									{

										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 7:
								{
									system("cls");
									cout << "���ܣ�6.[��Ų�ѯ]" << endl;
									cout << "��������Ҫ���ҵ��ڿ���ţ�";
									int sel_7;
									cin >> sel_7;
									system("cls");
									cout << "��ѯ�������ڿ���" << endl;
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
								cout << "��������ȷ�Ĺ������\n";
								goto LOOPX3;
							}

						}

					}
					case 4:
					{
						cout << "���ܣ�4.��ɾ���ڿ���" << endl;
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
									cout << "���ܣ�1.[����ɾ��]" << endl;
									cout << "��������Ҫɾ���Ŀ�����";
									cin >> Periodicals_name;
									int del_1 = Plist.search_name(Periodicals_name);
									if (del_1 >= 0)
									{
										Plist.deleted(del_1);
										system("cls");
										cout << "�ڿ���ɾ��" << endl;
									}
									else
									{
										system("cls");
										cout << "û���ҵ����ڿ�" << endl;
									}
									break;
								}
								case 2:
								{
									system("cls");
									cout << "���ܣ�2.[����ɾ��]" << endl;
									cout << "��������Ҫɾ���Ŀ��ţ�";
									cin >> Periodicals_CN;
									int del_2 = Plist.search_CN(Periodicals_CN);
									if (del_2 >= 0)
									{
										Plist.deleted(del_2);
										system("cls");
										cout << "�ڿ���ɾ��" << endl;
									}
									else
									{
										system("cls");
										cout << "û���ҵ����ڿ�" << endl;
									}
									break;
								}
								case 3:
								{
									system("cls");
									cout << "���ܣ�3.[���ɾ��]" << endl;
									cout << "��������Ҫɾ�����ڿ���ţ�";
									int del_3;
									cin >> del_3;
									Plist.deleted(del_3 - 1);
									system("cls");
									cout << "���ڿ���ɾ��";
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
								cout << "��������ȷ�Ĺ������\n";
								goto LOOPX4;
							}

						}
					}
					case 5:
					{
						cout << "���ܣ�5.���޸��ڿ���" << endl;
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
									cout << "���ܣ�1.[�޸�����]" << endl;
									cout << "��������Ҫ�޸ĵ��ڿ�����";
									cin >> Periodicals_name;
									int upd_1 = Plist.search_name(Periodicals_name);//����Ҫ�޸ĵ���Ӧ�ڿ���Ϣ
									Periodicals p = Plist.PeriodicalsInfor(upd_1);//���ظñ��ڿ�����Ϣ
									if (upd_1 >= 0)
									{
										cout << "��������ڿ��µ��ڿ�����";
										cin >> new_Pname;
										p.setName(new_Pname);
										Plist.update(upd_1, p);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_1);
									}
									else
									{
										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 2:
								{
									system("cls");
									cout << "���ܣ�2.[�޸ļ۸�]" << endl;
									cout << "��������Ҫ�޸ļ۸�Ŀ��ţ�";//��ΪCN�ܹ�ȷ�����ı���
									cin >> Periodicals_CN;
									int upd_2 = Plist.search_CN(Periodicals_CN);//����Ҫ�޸ĵ���Ӧ�ڿ���Ϣ
									Periodicals b = Plist.PeriodicalsInfor(upd_2);//���ظñ��ڿ�����Ϣ
									if (upd_2 >= 0)
									{
										cout << "��������ڿ��µļ۸�";
										cin >> new_Pprice;
										b.setPrice(new_Pprice);
										Plist.update(upd_2, b);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_2);
									}
									else
									{
										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 3:
								{
									system("cls");
									cout << "���ܣ�3.[�޸ĵ�λ]" << endl;
									cout << "��������Ҫ�޸ĵ�λ���ţ�";//��ΪCN�ܹ�ȷ�����ı���
									cin >> Periodicals_CN;
									int upd_3 = Plist.search_CN(Periodicals_CN);//����Ҫ�޸ĵ���Ӧ�ڿ���Ϣ
									Periodicals p = Plist.PeriodicalsInfor(upd_3);//���ظñ��ڿ�����Ϣ
									if (upd_3 >= 0)
									{
										cout << "��������ڿ��µĵ�λ��";
										cin >> new_PCA;
										p.setCA(new_PCA);
										Plist.update(upd_3, p);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_3);
									}
									else
									{
										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 4:
								{
									system("cls");
									cout << "���ܣ�4.[�޸Ŀ���]" << endl;
									cout << "��������Ҫ�޸ĵĿ��ţ�";//��ΪCN�ܹ�ȷ�����ı���
									cin >> Periodicals_CN;
									int upd_3 = Plist.search_CN(Periodicals_CN);//����Ҫ�޸ĵ���Ӧ�ڿ���Ϣ
									Periodicals p = Plist.PeriodicalsInfor(upd_3);//���ظñ��ڿ�����Ϣ
									if (upd_3 >= 0)
									{
										cout << "��������ڿ��µĿ��ţ�";
										cin >> new_PCN;
										p.setCN(new_PCN);
										Plist.update(upd_3, p);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_3);
									}
									else
									{
										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 5:
								{
									system("cls");
									cout << "���ܣ�4.[�޸Ŀ���]" << endl;
									cout << "��������Ҫ�޸��ڿ��Ŀ��ţ�";//��Ϊisbn�ܹ�ȷ�����ı���
									cin >> Periodicals_CN;
									int upd_5 = Plist.search_CN(Periodicals_CN);//����Ҫ�޸ĵ���Ӧ�ڿ���Ϣ
									Periodicals p = Plist.PeriodicalsInfor(upd_5);//���ظñ��ڿ�����Ϣ
									if (upd_5 >= 0)
									{
										cout << "��������ڿ��µĿ��ڣ�";
										cin >> new_PIssue;
										p.setIssue(new_PIssue);
										Plist.update(upd_5, p);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_5);
									}
									else
									{
										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
									}
									break;
								}
								case 6:
								{
									system("cls");
									cout << "���ܣ�4.[�޸ļ���]" << endl;
									cout << "��������Ҫ�޸ļ���Ŀ��ţ�";//��Ϊisbn�ܹ�ȷ�����ı���
									cin >> Periodicals_CN;
									int upd_6 = Plist.search_CN(Periodicals_CN);//����Ҫ�޸ĵ���Ӧ�ڿ���Ϣ
									Periodicals p = Plist.PeriodicalsInfor(upd_6);//���ظñ��ڿ�����Ϣ
									if (upd_6 >= 0)
									{
										cout << "��������ڿ��µĿ��ڣ�";
										cin >> new_PLevel;
										p.setLevel(new_PLevel);
										Plist.update(upd_6, p);
										system("cls");
										cout << "���޸ģ���Ϣ���£�" << endl;
										Plist.showPeriodicals_title();
										Plist.showPeriodicals(upd_6);
									}
									else
									{
										system("cls");
										cout << "û���ҵ����ڿ���Ϣ" << endl;
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
								cout << "��������ȷ�Ĺ������\n";
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
							cout << "���˳�ϵͳ" << endl;
							exit(0);
					}
					int n = getchar();
					}
				}
				else
				{
					system("cls");
					cout << "��������ȷ�Ĺ������\n";
					goto LOOPX;
				}
			}
			
		}
		if (k == 0)
		{
			system("cls");
			cout << "�����˳�ϵͳ...\n";
		}
	}
	else
		{
		system("cls");
		cout << "��������ȷ�Ĺ������\n";
		goto LOOPXX;
		}
	return 0;
}
