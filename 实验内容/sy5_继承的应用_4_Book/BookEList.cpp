#include "BookEList.h"
BookEList::BookEList()
{
	bookNum = 0;
}
void BookEList::insert(BookE b)//����ͼ��
{
	bookList[bookNum].setName(b.get_name());//�������ͼ��
	bookList[bookNum].setPrice(b.get_price());
	bookList[bookNum].setIsbn(b.get_isbn());
	bookList[bookNum].setPublisher(b.get_publisher());
	bookList[bookNum].setAuthor(b.get_author());
	bookNum++;//ͼ����ӳɹ�������ͼ����ĿbookNum+1
}
void BookEList::showBook(int i)//��ӡĳһ����
{
	//cout << left << setw(15) << bookList[i].get_name() << setw(15) << bookList[i].get_price() << setw(15) << bookList[i].get_isbn() << setw(15) << bookList[i].get_publisher() << setw(15) << bookList[i].get_author() << endl;
	cout << bookList[i];//ʹ�����������
}
void BookEList::showBook_title()//��ӡ��ͷ
{

	cout << left << setw(15) << "����" << setw(15) << "�۸�" << setw(15) << "ISBN" << setw(15) << "������" << setw(15) << "����" << endl;
}
void BookEList::showAll()//��ӡ�����鱾
{
	int j;
	j = bookNum;
	if (j == 0)
	{
		cout << "��ϵͳ��δ�洢ͼ��" << endl;
	}
	else
	{
		cout << "���� " << j << " ��ͼ��洢ϵͳ�У�" << "���£�" << endl;
		showBook_title();
	}

	for (bookNum = 0; bookNum < j; bookNum++)
	{
		showBook(bookNum);
	}
}//����ͼ����Ϣ��
int BookEList::search_name(string Name)//��������
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_name() == Name)
			return i;
	}
	if (i == bookNum)
	{
		return -1;
	}
}
int BookEList::search_price(float Price)//�۸����
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_price() == Price)
			return i;
	}
	if (i == bookNum)
	{
		return 0;
	}
}
int BookEList::search_isbn(string Isbn)//isbn����
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_isbn() == Isbn)
			return i;
	}
	if (i == bookNum)
	{
		return 0;
	}
}
int BookEList::search_publisher(string Publisher)//���������
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_publisher() == Publisher)
			return i;
	}
	if (i == bookNum)
	{
		return 0;
	}
}
int BookEList::search_author(string Author)//���߲���
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_author() == Author)
			return i;
	}
	if (i == bookNum)
	{
		return 0;
	}
}
//����ͼ����Ϣ��
BookE BookEList::bookInfor(int i)//��ȡ�鱾��Ϣ
{
	return bookList[i];
}
void BookEList::update(int i, BookE b)//�޸�ͼ����Ϣ��ָ���±�
{
	bookList[i].setName(b.get_name());//��Ҫ�޸�����������Զ���b���������
	bookList[i].setPrice(b.get_price());
	bookList[i].setIsbn(b.get_isbn());
	bookList[i].setPublisher(b.get_publisher());
	bookList[i].setAuthor(b.get_author());
}
void BookEList::deleted(int i)
{
	int j;
	for (j = i; j < (bookNum - 1); j++)
	{
		bookList[j].setName(bookList[j + 1].get_name());//ɾ�����j���������������j+1��������������ͬ��
		bookList[j].setPrice(bookList[j + 1].get_price());
		bookList[j].setIsbn(bookList[j + 1].get_isbn());
		bookList[j].setPublisher(bookList[j + 1].get_publisher());
		bookList[j].setAuthor(bookList[j + 1].get_author());
	}
	bookNum--;
}