#include "BookList.h"
BookList::BookList()
{
	bookNum = 0;
}
void BookList::insert(Book b)
{
	bookList[bookNum].setName(b.get_name());//�������ͼ��
	bookList[bookNum].setPrice(b.get_price());
	bookList[bookNum].setIsbn(b.get_isbn());
	bookList[bookNum].setPublisher(b.get_publisher());
	bookList[bookNum].setAuthor(b.get_author());
	bookNum++;//ͼ����ӳɹ�������ͼ����ĿbookNum+1
}
void BookList::showBook(int i)
{
	cout << left << setw(15) << bookList[i].get_name() << setw(15) << bookList[i].get_price() << setw(15) << bookList[i].get_isbn() << setw(15) << bookList[i].get_publisher() << setw(15) << bookList[i].get_author() << endl;

}
void BookList::showBook_title()
{

	cout << left << setw(15) << "����" << setw(15) << "�۸�" << setw(15) << "ISBN" << setw(15) << "������" << setw(15) << "����" << endl;
}
void BookList::showAll()
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
}
int BookList::search(string Name)
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_name() == Name)
			return i;
	}
	if (i == bookNum)
		return -1;
}
void BookList::update(int i, Book b)
{
	bookList[i].setName(b.get_name());
	bookList[i].setPrice(b.get_price());
	bookList[bookNum].setIsbn(b.get_isbn());
	bookList[bookNum].setPublisher(b.get_publisher());
	bookList[bookNum].setAuthor(b.get_author());
}
Book BookList::bookInfor(int i)
{
	return bookList[i];
}
void BookList::deleted(int i)
{
	int j;
	for (j = i; j < (bookNum - 1); j++)
	{
		bookList[j].setName(bookList[j + 1].get_name());
		bookList[j].setPrice(bookList[j + 1].get_price());
		bookList[j].setIsbn(bookList[j + 1].get_isbn());
		bookList[j].setPublisher(bookList[j + 1].get_publisher());
		bookList[j].setAuthor(bookList[j + 1].get_author());
	}
	bookNum--;
}
