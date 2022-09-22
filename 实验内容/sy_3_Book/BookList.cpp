#include "BookList.h"
BookList::BookList()
{
	bookNum = 0;
}
void BookList::insert(Book b)
{
	bookList[bookNum].setName(b.get_name());//依次添加图书
	bookList[bookNum].setPrice(b.get_price());
	bookList[bookNum].setIsbn(b.get_isbn());
	bookList[bookNum].setPuvlisher(b.get_puvlisher());
	bookList[bookNum].setAuthor(b.get_author());
	bookNum++;//图书添加成功后，现有图书数目bookNum+1
}
void BookList::showBook(int i)
{
	cout << left << setw(15) << bookList[i].get_name() << setw(15) << bookList[i].get_price() << setw(15) << bookList[i].get_isbn() << setw(15) << bookList[i].get_puvlisher() << setw(15) << bookList[i].get_author() << endl;

}
void BookList::showBook_title()
{

	cout << left << setw(15) << "书名" << setw(15) << "价格" << setw(15) << "ISBN" << setw(15) << "出版社" << setw(15) << "作者" << endl;
}
void BookList::showAll()
{
	cout << "图书系统已有一下书籍：" << endl;
	showBook_title();
	j = bookNum;
	for (bookNum = 0; bookNum < j; bookNum++)
	{
		showBook(bookNum);
	}
	cout << "共有图书" << j << "本" << endl;
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
	bookList[bookNum].setPuvlisher(b.get_puvlisher());
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
		bookList[j].setPuvlisher(bookList[j + 1].get_puvlisher());
		bookList[j].setAuthor(bookList[j + 1].get_author());
	}
	bookNum--;
}
