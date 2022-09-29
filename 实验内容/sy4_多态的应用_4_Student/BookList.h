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
	void insert(Book b);//����һ����
	void showBook(int i);//��ӡ�±�Ϊi���Ǳ������Ϣ
	void showBook_title();//��ӡ��ͷ
	void showAll();//��ӡ������
	int search_name(string name);//��������ȥ���Ҷ�Ӧ�ĵ�һ����
	int search_price(float price);//���ݼ۸�ȥ���Ҷ�Ӧ�ĵ�һ����
	int search_isbn(string isbn);//����isbnȥ���Ҷ�Ӧ�ĵ�һ����
	int search_publisher(string publisher);//���ݳ�����ȥ���Ҷ�Ӧ�ĵ�һ����
	int search_author(string author);//��������ȥ���Ҷ�Ӧ�ĵ�һ����
	void update(int i, Book b);//�޸�ʱ�����޸Ĳ�������,�����Ͳ���Ҫ�޸����еĲ���
	Book bookInfor(int i);//Ϊ���޸�ʱ��ȡԭʼ���ݣ����Ի�ȡĳһ����ľ�����Ϣ��Ȼ�󷵻�
	void deleted(int i);//ɾ����i��ͼ��
};
#endif
