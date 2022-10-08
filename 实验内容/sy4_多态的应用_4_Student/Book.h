#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
#ifndef BOOK_H
#define BOOK_H
class Book {
private:
	string name;	 //ͼ������ 
	float price;	 //�۸� 
	string isbn;	 //ISBN 
	string publisher;//������ 
	string author;	 //���� 
public:
	Book();//Ĭ�Ϲ��캯��
	Book(string Bname, float Bprice, string Bisbn, string Bpuvlisher, string Bauthor);//���ع��캯��
	string get_name();//��ȡ����
	void setName(const string newName);//��������
	float get_price();//��ȡ�۸�
	void setPrice(const float newPrice);//���ü۸�
	string get_isbn();//��ȡISBN
	void setIsbn(const string newIsbn);//����ISBN
	string get_publisher();//��ȡ������
	void setPublisher(const string newPublisher);//���ó�����
	string get_author();//��ȡ����
	void setAuthor(const string newAuthor);//��������
	friend istream& operator>>(istream& input, Book& book);//��������ط���������ͼ����Ϣ
	friend ostream& operator<<(ostream& output, Book& book);//��������ط��������ͼ����Ϣ
};
#endif // !BOOK_H