#pragma once
#include <iostream>
using namespace std;
class Book {
private:
	string name;	 //ͼ������ 
	float price;	 //�۸� 
	string isbn;	 //ISBN 
	string puvlisher;//������ 
	string author;	 //���� 
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

