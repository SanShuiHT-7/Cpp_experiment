#pragma once
#ifndef BOOKE_H
#define BOOKE_H
#include <iostream>
#include <iomanip>
#include "Book.h"
using namespace std;
class BookE :public Book
{
protected:
	string isbn;
	string publisher;
	string author;
public:
	BookE();
	BookE(const string Bname, const float Bprice, const string Bisbn, const string Bpuvlisher, const string Bauthor);
	string get_isbn();
	string get_publisher();
	string get_author();
	void setIsbn(const string newIsbn);
	void setPublisher(const string newPublisher);
	void setAuthor(const string newAuthor);
	friend istream& operator>>(istream& input, BookE& booke);
	friend ostream& operator<<(ostream& output, BookE& booke);
};
#endif // !BOOKE_H