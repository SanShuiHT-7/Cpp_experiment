#include "Periodicals.h"
Periodicals::Periodicals()//构造函数Book()
{
}
Periodicals::Periodicals(const string Bname, const float Bprice, const string CA, const string CN, const string Issue, const string Level) :Book(Bname, Bprice)//重载构造函数：形参初始化数据成员
{
	this->CA = CA;
	this->CN = CN;
	this->Issue = Issue;
	this->Level = Level;
}
string Periodicals::get_CA()
{
	return CA;
}
string Periodicals::get_CN()
{
	return CN;
}
string Periodicals::get_Issue()
{
	return Issue;
}
string Periodicals::get_Level()
{
	return Level;
}
void Periodicals::setCA(const string newCA)
{
	CA = newCA;
}
void Periodicals::setCN(const string newCN)
{
	CN = newCN;
}
void Periodicals::setIssue(const string newIssue)
{
	Issue = newIssue;
}
void Periodicals::setLevel(const string newLevel)
{
	Level = newLevel;
}

istream& operator>>(istream& input, Periodicals& periodicals)
{
	cout << "请输入期刊名：";
	input >> periodicals.name;
	cout << "请输入期刊价格：";
	input >> periodicals.price;
	cout << "请输入主管单位：";
	input >> periodicals.CA;
	cout << "请输入刊号：";
	input >> periodicals.CN;
	cout << "请输入刊期：";
	input >> periodicals.Issue;
	cout << "请输入级别：";
	input >> periodicals.Level;
	return input;
}
ostream& operator<<(ostream& output, Periodicals& periodicals)
{
	output << left << setw(15) << periodicals.name << setw(15) << periodicals.price << setw(15) << periodicals.CA << setw(15) << periodicals.CN << setw(15) << periodicals.Issue << periodicals.Level << endl;
	return output;
}