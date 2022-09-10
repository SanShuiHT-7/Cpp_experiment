#include <iostream>
using namespace std;
class Book{
	private:
		string name;	 //ͼ������ 
		float price;	 //�۸� 
		string isbn;	 //ISBN 
		string puvlisher;//������ 
		string author;	 //���� 
	public:
		Book();
		Book(string name,float price,string isbn,string puvlisher,string author);
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
Book::Book(string name,float price,string isbn,string puvlisher,string author)
{
	this->name=name;
	this->price=price;
	this->isbn=isbn;
	this->puvlisher=puvlisher;
	this->author=author;
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

