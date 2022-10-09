#pragma once
#ifndef BOOKLIST_H
#define BOOKLIST_H
#include <iostream>
#include <iomanip>
#include "BookE.h"
using namespace std;
class BookEList :public BookE
{
protected:
	BookE bookList[100];
public:
	int bookNum;
	BookEList();
	void insert(BookE b);	
	void showBook(int i);
	void showBook_title();
	void showAll();
	int search_name(string name);
	int search_price(float price);
	int search_isbn(string isbn);
	int search_publisher(string publisher);
	int search_author(string author);
	void update(int i, BookE b);
	BookE bookInfor(int i);
	void deleted(int i);
};
#endif