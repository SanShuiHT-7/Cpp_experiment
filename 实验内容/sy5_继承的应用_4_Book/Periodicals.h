#pragma once
#ifndef PERIODICALS_H
#define PERIODICALS_H
#include <iostream>
#include <iomanip>
#include "Book.h"
using namespace std;
class Periodicals :public Book
{
protected:
	
	string CA;//Competent Authority���ܵ�λ
	string CN;//CN����
	string Issue;//����
	string Level;//����
public:
	Periodicals();
	Periodicals(const string name, const float price, const string CA, const string CN, const string Issue,const string Level);
	string get_CA();
	string get_CN();
	string get_Issue();
	string get_Level();
	void setCA(const string newCA);
	void setCN(const string newCN);
	void setIssue(const string newIssue);
	void setLevel(const string newLevel);
	friend istream& operator>>(istream& input, Periodicals& periodicals);
	friend ostream& operator<<(ostream& output, Periodicals& periodicals);
};
#endif // !PERIODICALS_H