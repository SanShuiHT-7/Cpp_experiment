#include "Book.h"
Book::Book()
{

}
Book::Book(string B_name, float B_price, string B_isbn, string B_puvlisher, string B_author)
{
	name = B_name;
	price = B_price;
	isbn = B_isbn;
	puvlisher = B_puvlisher;
	author = B_author;
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
string Book::get_puvlisher()
{
	return puvlisher;
}
void Book::setPuvlisher(const string newPuvlisher)
{
	puvlisher = newPuvlisher;
}
string Book::get_author()
{
	return author;
}
void Book::setAuthor(const string newAuthor)
{
	author = newAuthor;
}
