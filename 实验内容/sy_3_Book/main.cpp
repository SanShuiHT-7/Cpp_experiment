#include <iostream>
#include <iomanip>
#include "Book.h"
#include "BookList.h"
using namespace std;
int main()
{
	//��ʼ��b1����
	Book b1;
	string book_name,book_isbn,book_publisher,book_author,new_bookname;
	float book_price;
	BookList list;
	//����flagֵ�����ڿ���ѭ��
	char flag_insert = 'N', flag_search = 'N', flag_update = 'N', flag_delete = 'N';
	//���ͼ��,����Ϣ�洢��b1����
	while (true)
	{
		cout << "������������";
		cin >> book_name;
		b1.setName(book_name);
		//�ж�����۸�ĺϷ���
		unsigned long Bprice = 0;
		cout << "������ͼ��۸�";
		cin >> book_price;
		string num_price;
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
		//����b1
		list.insert(b1);
		//��ӡ�����鱾��Ϣ
		list.showAll();
		//�˵�����
		cout << "�Ƿ����¼��ͼ�飨Y/N����";
		cin >> flag_insert;
		if (!((flag_insert == 'Y' || (flag_insert == 'y'))))
		{
			cout << "���˳�¼��......" << endl;
			break;
		}
	}
	return 0;
}
