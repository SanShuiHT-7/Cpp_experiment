#include "Book.h"
Book::Book()//���캯��Book()
{
}

Book::Book(string Bname, float Bprice, string Bisbn, string Bpublisher, string Bauthor)//���ع��캯�����βγ�ʼ�����ݳ�Ա
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
	cout << "������������";
	input >> book.name;
	cout << "������ͼ��۸�";
	input >> book.price;
	cout << "������ͼ��ISBN��";
	input >> book.isbn;
	cout << "������ͼ��ĳ����磺";
	input >> book.publisher;
	cout << "���������ߣ�";
	input >> book.author;
	return input;
}
ostream& operator<<(ostream& output, Book& book)
{
	output << left << setw(15) << book.name << setw(15) << book.price << setw(15) << book.isbn << setw(15) << book.publisher << setw(15) << book.author << endl;
	return output;
}

