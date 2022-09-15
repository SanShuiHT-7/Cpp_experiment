#include <iostream>
using namespace std;
class Book{
	private:
		string name;	 //图书名称 
		float price;	 //价格 
		string isbn;	 //ISBN 
		string puvlisher;//出版社 
		string author;	 //作者 
	public:
		Book();
		Book(string Bname,float Bprice,string Bisbn,string Bpuvlisher,string Bauthor);
		string get_name();
		void setName(const string newName);
		float get_price();
		void setPrice(const float newPrice);
		string get_isbn();
		void setIsbn(const string newIsbn);
		string get_puvlisher();
		void setPuvlisher(const string newPuvlisher);
		string get_author();
		void setAuthor(const string newAuthor);
};
Book::Book()
{
	
}
Book::Book(string B_name,float B_price,string B_isbn,string B_puvlisher,string B_author)
{
	name=B_name;
	price=B_price;
	isbn=B_isbn;
	puvlisher=B_puvlisher;
	author=B_author;
}
string Book::get_name(){
	return name; 
}
void Book::setName(const string newName){
	name=newName; 
} 
float Book::get_price(){
	return price;
}
void Book::setPrice(const float newPrice){
	price=newPrice;
}

string Book::get_isbn()
{
	return isbn;
}
void Book::setIsbn(const string newIsbn)
{
	isbn=newIsbn;
}
string Book::get_puvlisher()
{
	return puvlisher;
}
void Book::setPuvlisher(const string newPuvlisher)
{
	puvlisher=newPuvlisher;
}
string Book::get_author()
{
	return author;
}
void Book::setAuthor(const string newAuthor)
{
	author=newAuthor;
}
