#pragma once
#include <iostream>
#include <iomanip>
#include "Book.h"
using namespace std;
#ifndef BOOKLIST_H
#define BOOKLIST_H
class BookList
{
private:
	Book bookList[100];
public:
	int bookNum;
	BookList();
	void insert(Book b);//增加一本书
	void showBook(int i);//打印下标为i的那本书的信息
	void showBook_title();//打印表头
	void showAll();//打印所有书
	int search_name(string name);//根据书名去查找对应的第一本书
	int search_price(float price);//根据价格去查找对应的第一本书
	int search_isbn(string isbn);//根据isbn去查找对应的第一本书
	int search_publisher(string publisher);//根据出版社去查找对应的第一本书
	int search_author(string author);//根据作者去查找对应的第一本书
	void update(int i, Book b);//修改时允许修改部分数据,这样就不需要修改所有的参数
	Book bookInfor(int i);//为了修改时获取原始数据，可以获取某一本书的具体信息，然后返回
	void deleted(int i);//删除第i本图书
};
#endif
