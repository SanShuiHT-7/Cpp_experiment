#include "Book.h"
Book::Book()//���캯��Book()
{
}

Book::Book(const string Bname, const float Bprice)//���ع��캯�����βγ�ʼ�����ݳ�Ա
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
	cout << "������������";
	input >> book.name;
	cout << "������ͼ��۸�";
	input >> book.price;

	return input;
}
ostream& operator<<(ostream& output, Book& book)
{
	output << left << setw(15) << book.name << setw(15) << book.price<< endl;
	return output;
}

