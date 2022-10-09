#include "BookE.h"
BookE::BookE()//���캯��Book()
{
}
BookE::BookE(const string Bname, const float Bprice, const string Bisbn, const string Bpublisher, const string Bauthor) :Book(Bname, Bprice)//���ع��캯�����βγ�ʼ�����ݳ�Ա
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
ostream& operator<<(ostream& output, BookE& book)
{
	output << left << setw(15) << book.name << setw(15) << book.price << setw(15) << book.isbn << setw(15) << book.publisher << setw(15) << book.author << endl;
	return output;
}