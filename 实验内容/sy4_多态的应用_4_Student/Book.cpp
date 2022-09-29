#include "Book.h"
Book::Book()//构造函数Book()
{
}

Book::Book(string Bname, float Bprice, string Bisbn, string Bpublisher, string Bauthor)//重载构造函数：形参初始化数据成员
{
	name = Bname;
	price = Bprice;
	isbn = Bisbn;
	publisher = Bpublisher;
	author = Bauthor;
}
string Book::get_name() {
	return name;
}
void Book::setName(const string newName) {
	name = newName;
}
float Book::get_price() {
	return price;
}
void Book::setPrice(const float newPrice) {
	price = newPrice;
}

string Book::get_isbn()
{
	return isbn;
}
void Book::setIsbn(const string newIsbn)
{
	isbn = newIsbn;
}
string Book::get_publisher()
{
	return publisher;
}
void Book::setPublisher(const string newPublisher)
{
	publisher = newPublisher;
}
string Book::get_author()
{
	return author;
}
void Book::setAuthor(const string newAuthor)
{
	author = newAuthor;
}
istream& operator>>(istream& input, Book& book)
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
ostream& operator<<(ostream& output, Book& book)
{
	output << left << setw(15) << book.name << setw(15) << book.price << setw(15) << book.isbn << setw(15) << book.publisher << setw(15) << book.author << endl;
	return output;
}

