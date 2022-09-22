#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Book.h"
#include "BookList.h"
using namespace std;
int main()
{
	
	Book b1;//��ʼ��b1����
	string book_name,book_isbn,book_publisher,book_author,new_bookname;
	float book_price;
	BookList list;
	string num_price;//�жϼ۸�Ϸ���
	unsigned long Bprice = 0;
	char flag_insert = 'Y', flag_search = 'Y', flag_update = 'Y', flag_delete = 'Y';//����flagֵ�����ڿ���ѭ��
	int k;
	while(1)
	{
		
		//����switch���ʵ��ͼ�����ϵͳ�˵�
		cout << "\n\n    ��ӭʹ��ͼ�����ϵͳ\n";
		cout << "****************************\n";
		cout << "*          ���˵�          *\n";
		cout << "****************************\n\n";
		cout << "1.��ͼ��¼�롿	2.����ӡͼ�顿\n\n";
		cout << "3.���������ҡ�	4.����Ų��ҡ�\n\n";
		cout << "5.������ɾ����	6.�����ɾ����\n\n";
		cout << "7.���޸�������	8.���˳�ϵͳ��\n\n";
		cout << "�������Ӧ�������:\n";
		cin >> k;
		switch (k)
		{
		case 1:
		{
			cout << "���ܣ���ͼ��¼�롿" << endl;
			cout << "������������";
			cin >> book_name;
			b1.setName(book_name);
			//�ж�����۸�ĺϷ���
			cout << "������ͼ��۸�";
			cin >> book_price;
			while (cin.fail())
			{
				cin.clear();//���ȵ��� istream ��ĳ�Ա���� clear() ����մ����־
				cin >> num_price;//ͨ�� cin ����������� >> ���������������� string ���͵ı����У��������������ʾ��Ϣ
				cout << "�����" << num_price << "����һ������۸���������������һ������";
				cin >> book_price;
			}
			b1.setPrice(book_price);
			cout << "������ͼ��ISBN��";
			cin >> book_isbn;
			b1.setIsbn(book_isbn);
			cout << "������ͼ��ĳ����磺";
			cin >> book_publisher;
			b1.setPublisher(book_publisher);
			cout << "���������ߣ�";
			cin >> book_author;
			b1.setAuthor(book_author);
			cout << "�Ƿ�¼���ͼ�飨Y/N��:";
			cin >> flag_insert;
			if (((flag_insert == 'Y') || (flag_insert == 'y')))
			{
				list.insert(b1);
				cout << "�Ѿ�¼����鱾" << endl;
				break;
			}
			else
			{
				cout << "δ¼��" << endl;
				break;
			}
		}
			
		case 2:
		{
			cout << "���ܣ�����ӡͼ�顿" << endl;
			list.showAll();
			break;
		}
			
		case 3: 
		{
			cout << "���ܣ����������ҡ�" << endl;
			cout << "��������Ҫ���ҵ�ͼ�飺";
			cin >> book_name;
			int x1 = list.search(book_name);
			if (x1 >= 0)
			{
				list.showBook(x1);
			}
			else
			{
				cout << "û���ҵ���ͼ����Ϣ" << endl;
			}
			break;
		}
			
		case 4:
		{
			cout << "���ܣ�����Ų��ҡ�" << endl;
			cout << "��������Ҫ���ҵ�ͼ����ţ�";
			int i1;
			cin >> i1;
			cout << "�������ҵ���Ϣ���£�" << endl;
			list.showBook(i1-1);
			break;
		}
			
		case 5:
		{
			cout << "���ܣ�������ɾ����" << endl;
			cout << "��������Ҫɾ����������";
			cin >> book_name;
			int x2 = list.search(book_name);
			if (x2 >= 0)
			{
				list.deleted(x2);
				cout << "ͼ����ɾ��" << endl;
			}
			else
			{
				cout << "û���ҵ���ͼ��" << endl;
			}
			break;
		}
			
		case 6:
		{
			cout << "���ܣ������ɾ����" << endl;
			cout << "��������Ҫɾ����ͼ����ţ�";
			int i2;
			cin >> i2;
			list.deleted(i2-1);
			cout << "��ͼ����ɾ��";
			break;
		}
			
		case 7:
		{
			cout << "���ܣ����޸�������" << endl;
			cout << "��������Ҫ�޸ĵ�ͼ������";
			cin >> book_name;
			int x3 = list.search(book_name);//����Ҫ�޸ĵ���Ӧͼ����Ϣ
			Book b = list.bookInfor(x3);//���ظñ�ͼ�����Ϣ
			if (x3 >= 0)
			{
				cout << "�������ͼ���µ�ͼ������";
				cin >> new_bookname;
				b.setName(new_bookname);
				list.update(x3, b);
				cout << "���޸ģ���Ϣ���£�" << endl;
				list.showBook(x3);
			}
			else
			{
				cout << "û���ҵ���ͼ����Ϣ" << endl;
			}
			break;
		}
			
		case 8:
			cout << "���˳�ϵͳ" << endl;
			exit(0);
		}

	int n = getchar();
	}
	return 0;
}
