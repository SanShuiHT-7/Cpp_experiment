#include <iostream>
#include <iomanip>
#include "Book.h"
using namespace std;
//��������
Book bookList[10];//���ô�ſռ��СΪ10
int bookNum = 0, i = 0, j = 0;//���ü�����ֵ 
int main() {
	string Bname, Bisbn, Bpuvlisher, Bauthor;
	float Bprice;
	char flag = 'N';
	while (true)
	{
		cout << "������ͼ������";
		cin >> Bname;
		unsigned long Bprice = 0;	//Bprice �������� unsigned long �������ʱ����Ĳ������֣��� cin.fail() �����ķ���ֵ�� true �� 
		cout << "������ͼ��۸�";
		cin >> Bprice;
		string num_Bprice;
		while (cin.fail())
		{
			cin.clear();//���ȵ��� istream ��ĳ�Ա���� clear() ����մ����־
			cin >> num_Bprice;//ͨ�� cin ����������� >> ���������������� string ���͵ı����У��������������ʾ��Ϣ
			cout << "�����" << num_Bprice << "����һ������۸���������������һ������";
			cin >> Bprice;
		}
		cout << "������ͼ��ISBN��";
		cin >> Bisbn;
		cout << "������ͼ������磺";
		cin >> Bpuvlisher;
		cout << "������ͼ�����ߣ�";
		cin >> Bauthor;
		Book b(Bname, Bprice, Bisbn, Bpuvlisher, Bauthor);
		insert(b);//������ 
		cout << endl;
		cout << "ͼ��ϵͳ����һ���鼮��" << endl;
		cout << left << setw(15) << "����" << setw(15) << "�۸�" << setw(15) << "ISBN" << setw(15) << "������" << setw(15) << "����" << endl;
		j = bookNum;
		for (bookNum = 0; bookNum < j; bookNum++)
		{
			showBook(bookNum);
		}
		cout << endl;
		cout << "�Ƿ����¼��ͼ�飨Y/N��:";
		cin >> flag;
		if (((flag == 'N') || (flag == 'n')))
		{
			cout << "���˳�¼��......" << endl;
			break;
		}
	}

}
