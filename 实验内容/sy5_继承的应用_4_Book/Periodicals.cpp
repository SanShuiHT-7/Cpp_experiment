#include "Periodicals.h"
Periodicals::Periodicals()//���캯��Book()
{
}
Periodicals::Periodicals(const string Bname, const float Bprice, const string CA, const string CN, const string Issue, const string Level) :Book(Bname, Bprice)//���ع��캯�����βγ�ʼ�����ݳ�Ա
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
	cout << "�������ڿ�����";
	input >> periodicals.name;
	cout << "�������ڿ��۸�";
	input >> periodicals.price;
	cout << "���������ܵ�λ��";
	input >> periodicals.CA;
	cout << "�����뿯�ţ�";
	input >> periodicals.CN;
	cout << "�����뿯�ڣ�";
	input >> periodicals.Issue;
	cout << "�����뼶��";
	input >> periodicals.Level;
	return input;
}
ostream& operator<<(ostream& output, Periodicals& periodicals)
{
	output << left << setw(15) << periodicals.name << setw(15) << periodicals.price << setw(15) << periodicals.CA << setw(15) << periodicals.CN << setw(15) << periodicals.Issue << periodicals.Level << endl;
	return output;
}