#pragma once
#include <iostream>
using namespace std;
class Book {
private:
	string name;	 //ͼ������ 
	float price;	 //�۸� 
	string isbn;	 //ISBN 
	string publisher;//������ 
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
	string get_publisher();
	void setPublisher(const string newPublisher);
	string get_author();
	void setAuthor(const string newAuthor);
};

