#include "Book.h"
Book::Book()//构造函数Book()
{
}

Book::Book(const string Bname, const float Bprice)//重载构造函数：形参初始化数据成员
{
	name = Bname;
	price = Bprice;
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

istream& operator>>(istream& input, Book& book)
{
	cout << "请输入书名：";
	input >> book.name;
	cout << "请输入图书价格：";
	input >> book.price;

	return input;
}
ostream& operator<<(ostream& output, Book& book)
{
	output << left << setw(15) << book.name << setw(15) << book.price<< endl;
	return output;
}

