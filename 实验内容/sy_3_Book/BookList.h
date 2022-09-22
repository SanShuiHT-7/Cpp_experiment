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
	void insert(Book b);
	void showBook(int i);
	void showBook_title();
	void showAll();
	int search(string name);
	void update(int i, Book b);
	Book bookInfor(int i);
	void deleted(int i);
};
#endif
