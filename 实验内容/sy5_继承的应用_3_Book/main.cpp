#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include "Book.h"
#include "BookE.h"
#include "BookEList.h"
using namespace std;
void Show_Menu()
{
	cout << "\n===========================\n";
	cout << "  <<��ӭʹ��ͼ�����ϵͳ>>  \n";
	cout << "===========================\n";
	cout << "[         ���˵�          ]\n";
	cout << "===========================\n";
	cout << "��1.���ͼ�顿��2.��ӡ��⡿\n\n";
	cout << "��3.����ͼ�顿��4.ɾ��ͼ�顿\n\n";
	cout << "��5.�޸�ͼ�顿��6.�˳�ϵͳ��\n";
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
	cout << "7.[�������˵�] \n";
	cout << "===========================\n";
	cout << "�������Ӧ�������:\n";
}
void Show_LowMenu_delect()
{
	cout << "\n===========================\n";
	cout << "[         �����˵�        ]\n";
	cout << "===========================\n";
	cout << "1.[����ɾ��] 2.[ISBNɾ��]  \n\n";
	cout << "3.[���ɾ��] 4.[�������˵�]\n";
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
	cout << "5.[�޸�����] 6.[�������˵�]\n";
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
	char flag_insert = 'Y', flag_search = 'Y', flag_update = 'Y', flag_delete = 'Y';//����flagֵ�����ڿ���ѭ��
	int k;
	while (1)
	{

		//����switch���ʵ��ͼ�����ϵͳ�˵�
	LOOP:Show_Menu();
		cin >> k;
		if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6)
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
					if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6 || k==7)
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
	return 0;
}
