#include "BookList.h"
BookList::BookList()
{
	bookNum = 0;
}
void BookList::insert(Book b)//创建图书
{
	bookList[bookNum].setName(b.get_name());//依次添加图书
	bookList[bookNum].setPrice(b.get_price());
	bookList[bookNum].setIsbn(b.get_isbn());
	bookList[bookNum].setPublisher(b.get_publisher());
	bookList[bookNum].setAuthor(b.get_author());
	bookNum++;//图书添加成功后，现有图书数目bookNum+1
}
void BookList::showBook(int i)//打印某一本书
{
	//cout << left << setw(15) << bookList[i].get_name() << setw(15) << bookList[i].get_price() << setw(15) << bookList[i].get_isbn() << setw(15) << bookList[i].get_publisher() << setw(15) << bookList[i].get_author() << endl;
	cout << bookList[i];//使用输出流重载
}
void BookList::showBook_title()//打印表头
{

	cout << left << setw(15) << "书名" << setw(15) << "价格" << setw(15) << "ISBN" << setw(15) << "出版社" << setw(15) << "作者" << endl;
}
void BookList::showAll()//打印所有书本
{
	int j;
	j = bookNum;
	if (j == 0)
	{
		cout << "本系统暂未存储图书" << endl;
	}
	else
	{
		cout << "共有 " << j << " 本图书存储系统中，" << "如下：" << endl;
		showBook_title();
	}

	for (bookNum = 0; bookNum < j; bookNum++)
	{
		showBook(bookNum);
	}
}//查找图书信息↓
int BookList::search_name(string Name)//书名查找
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
int BookList::search_price(float Price)//价格查找
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_price() == Price)
			return i;
	}
	if (i == bookNum)
		return -1;
}
int BookList::search_isbn(string Isbn)//isbn查找
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_isbn() == Isbn)
			return i;
	}
	if (i == bookNum)
		return -1;
}
int BookList::search_publisher(string Publisher)//出版社查找
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_publisher() == Publisher)
			return i;
	}
	if (i == bookNum)
		return -1;
}
int BookList::search_author(string Author)//作者查找
{
	int i;
	for (i = 0; i < bookNum; i++)
	{
		if (bookList[i].get_author() == Author)
			return i;
	}
	if (i == bookNum)
		return -1;
}
//查找图书信息↑
Book BookList::bookInfor(int i)//获取书本信息
{
	return bookList[i];
}
void BookList::update(int i, Book b)//修改图书信息，指定下标
{
	bookList[i].setName(b.get_name());
	bookList[i].setPrice(b.get_price());
	bookList[bookNum].setIsbn(b.get_isbn());
	bookList[bookNum].setPublisher(b.get_publisher());
	bookList[bookNum].setAuthor(b.get_author());
}
void BookList::deleted(int i)//删除某本信息
{
	int j;
	for (j = i; j < (bookNum - 1); j++);//后面的图书逐一覆盖
	{
		bookList[j].setName(bookList[j + 1].get_name());
		bookList[j].setPrice(bookList[j + 1].get_price());
		bookList[j].setIsbn(bookList[j + 1].get_isbn());
		bookList[j].setPublisher(bookList[j + 1].get_publisher());
		bookList[j].setAuthor(bookList[j + 1].get_author());
	}
	bookNum--;
}
