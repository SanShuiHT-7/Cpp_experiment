#include <iostream>
#include <string>
using namespace std;
class Book
{
  private:
    string name;
    float price;
    string writer;
  public:
    string get_name();
	void setName(const string newName);
	float get_price();
	void setPrice(const float newPrice);
	string get_writer();
	void setWriter(const string newWriter);
};
string Book::get_name()
{
    return name;
}
void Book::setName(const string newName)
{
    name=newName;
}
float Book::get_price()
{
    return price;
}
void Book::setPrice(const float newPrice)
{
    price=newPrice; 
}
string Book::get_writer()
{
    return writer;
}
void Book::setWriter(const string newWriter)
{  
    writer=newWriter;
}
