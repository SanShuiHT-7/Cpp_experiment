#include "Book.h"
Book::Book()//构造函数Book()
{
}

Book::Book(string name, float price, string isbn, string publisher, string author)//重载构造函数：形参初始化数据成员
{
	this->name = name;
	this->price = price;
	this->isbn = isbn;
	this->publisher = publisher;
	this->author = author;
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
	//判断输入价格的合法性
	string num_price;
	unsigned long Bprice = 0;
	input >> book.price;
	while (cin.fail())
	{
		cin.clear();//首先调用 istream 类的成员函数 clear() 来清空错误标志
		input >> book.price;//通过 cin 和输入操作符 >> 将错误的输出保存在 string 类型的变量中，并且输出错误提示信息
		cout << "输入的" << num_price << "不是一个合理价格数，请重新输入一个数：";
		input >> book.price;
	}
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

