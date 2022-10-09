#pragma once
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <iomanip>
using namespace std;
class Book 
{
protected:
	string name;	 
	float price;	
public:
	Book();
	Book(const string Bname, const float Bprice);
	string get_name();
	void setName(const string newName);
	float get_price();//获取价格
	void setPrice(const float newPrice);
};
#endif // !BOOK_H
