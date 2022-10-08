#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
#ifndef BOOK_H
#define BOOK_H
class Book {
private:
	string name;	 //图书名称 
	float price;	 //价格 
	string isbn;	 //ISBN 
	string publisher;//出版社 
	string author;	 //作者 
public:
	Book();//默认构造函数
	Book(string Bname, float Bprice, string Bisbn, string Bpuvlisher, string Bauthor);//重载构造函数
	string get_name();//获取书名
	void setName(const string newName);//设置书名
	float get_price();//获取价格
	void setPrice(const float newPrice);//设置价格
	string get_isbn();//获取ISBN
	void setIsbn(const string newIsbn);//设置ISBN
	string get_publisher();//获取出版社
	void setPublisher(const string newPublisher);//设置出版社
	string get_author();//获取作者
	void setAuthor(const string newAuthor);//设置作者
	friend istream& operator>>(istream& input, Book& book);//运算符重载方法，输入图书信息
	friend ostream& operator<<(ostream& output, Book& book);//运算符重载方法，输出图书信息
};
#endif // !BOOK_H