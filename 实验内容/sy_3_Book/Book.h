#pragma once
#include <iostream>
using namespace std;
class Book {
private:
	string name;	 //图书名称 
	float price;	 //价格 
	string isbn;	 //ISBN 
	string puvlisher;//出版社 
	string author;	 //作者 
public:
	Book();
	Book(string Bname, float Bprice, string Bisbn, string Bpuvlisher, string Bauthor);
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

