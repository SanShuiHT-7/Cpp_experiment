#pragma once
#include <iostream>
using namespace std;
#ifndef BOOK_H
#define BOOK_H
class Book {
private:
	string name;
	float price;
public:
	string get_name();
	void setName(const string newName);
	float get_price();
	void setPrice(const float newPrice);
};
#endif