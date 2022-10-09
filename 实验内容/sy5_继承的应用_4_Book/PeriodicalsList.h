#pragma once
#ifndef PERIODICALSLIST_H
#define PERIODICALSLIST_H
#include <iostream>
#include <iomanip>
#include "Periodicals.h"
using namespace std;
class PeriodicalsList :public Periodicals
{
protected:
	Periodicals PList[100];
public:
	int PNum;
	PeriodicalsList();
	void insert(Periodicals p);
	void showPeriodicals(int i);
	void showPeriodicals_title();
	void showAll_P();
	int search_name(string name);
	int search_price(float price);
	int search_CA(string CA);
	int search_CN(string CN);
	int search_Issue(string Issue);
	int search_Level(string Level);
	Periodicals PeriodicalsInfor(int i);
	void update(int i, Periodicals p);
	void deleted(int i);
};
#endif // !PERIODICALSLIST_H