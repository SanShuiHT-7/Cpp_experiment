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