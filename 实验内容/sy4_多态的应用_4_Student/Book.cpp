#include "Book.h"
Book::Book()//���캯��Book()
{
}

Book::Book(string name, float price, string isbn, string publisher, string author)//���ع��캯�����βγ�ʼ�����ݳ�Ա
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
	cout << "������������";
	input >> book.name;
	cout << "������ͼ��۸�";
	//�ж�����۸�ĺϷ���
	string num_price;
	unsigned long Bprice = 0;
	input >> book.price;
	while (cin.fail())
	{
		cin.clear();//���ȵ��� istream ��ĳ�Ա���� clear() ����մ����־
		input >> book.price;//ͨ�� cin ����������� >> ���������������� string ���͵ı����У��������������ʾ��Ϣ
		cout << "�����" << num_price << "����һ������۸���������������һ������";
		input >> book.price;
	}
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

