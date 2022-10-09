#include "BookE.h"
BookE::BookE()//构造函数Book()
{
}
BookE::BookE(const string Bname, const float Bprice, const string Bisbn, const string Bpublisher, const string Bauthor) :Book(Bname, Bprice)//重载构造函数：形参初始化数据成员
{
	isbn = Bisbn;
	publisher = Bpublisher;
	author = Bauthor;
}
string BookE::get_isbn()
{
	return isbn;
}
void BookE::setIsbn(const string newIsbn)
{
	isbn = newIsbn;
}
string BookE::get_publisher()
{
	return publisher;
}
void BookE::setPublisher(const string newPublisher)
{
	publisher = newPublisher;
}
string BookE::get_author()
{
	return author;
}
void BookE::setAuthor(const string newAuthor)
{
	author = newAuthor;
}
istream& operator>>(istream& input, BookE& book)
{
	cout << "请输入书名：";
	input >> book.name;
	cout << "请输入图书价格：";
	input >> book.price;
	cout << "请输入图书ISBN：";
	input >> book.isbn;
	cout << "请输入图书的出版社：";
	input >> book.publisher;
	cout << "请输入作者：";
	input >> book.author;
	return input;
}
ostream& operator<<(ostream& output, BookE& book)
{
	output << left << setw(15) << book.name << setw(15) << book.price << setw(15) << book.isbn << setw(15) << book.publisher << setw(15) << book.author << endl;
	return output;
}