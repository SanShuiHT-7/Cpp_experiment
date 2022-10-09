#include "PeriodicalsList.h"
PeriodicalsList::PeriodicalsList()
{
	PNum = 0;
}
void PeriodicalsList::insert(Periodicals p)//创建期刊
{
	PList[PNum].setName(p.get_name());//依次添加期刊
	PList[PNum].setPrice(p.get_price());
	PList[PNum].setCA(p.get_CA());
	PList[PNum].setCN(p.get_CN());
	PList[PNum].setIssue(p.get_Issue());
	PList[PNum].setLevel(p.get_Level());
	PNum++;//图书添加成功后，现有图书数目bookNum+1
}
void PeriodicalsList::showPeriodicals(int i)//打印某一本书
{
	//cout << left << setw(15) << bookList[i].get_name() << setw(15) << bookList[i].get_price() << setw(15) << bookList[i].get_isbn() << setw(15) << bookList[i].get_publisher() << setw(15) << bookList[i].get_author() << endl;
	cout << PList[i];//使用输出流重载
}
void PeriodicalsList::showPeriodicals_title()//打印表头
{

	cout << left << setw(15) << "期刊名" << setw(15) << "价格" << setw(15) << "主管单位" << setw(15) << "刊号" << setw(15) << "刊期" << setw(15) << "级别" << endl;
}
void PeriodicalsList::showAll_P()//打印所有书本
{
	int j;
	j = PNum;
	if (j == 0)
	{
		cout << "本系统暂未存储图书" << endl;
	}
	else
	{
		cout << "共有 " << j << " 本图书存储系统中，" << "如下：" << endl;
		showPeriodicals_title();
	}

	for (PNum = 0; PNum < j; PNum++)
	{
		showPeriodicals(PNum);
	}
}//查找图书信息↓
int PeriodicalsList::search_name(string Name)//书名查找
{
	int i;
	for (i = 0; i < PNum; i++)
	{
		if (PList[i].get_name() == Name)
			return i;
	}
	if (i == PNum)
	{
		return -1;
	}
}
int PeriodicalsList::search_price(float Price)//价格查找
{
	int i;
	for (i = 0; i < PNum; i++)
	{
		if (PList[i].get_price() == Price)
			return i;
	}
	if (i == PNum)
	{
		return 0;
	}
}
int PeriodicalsList::search_CA(string CA)//CA查找
{
	int i;
	for (i = 0; i < PNum; i++)
	{
		if (PList[i].get_CA() == CA)
			return i;
	}
	if (i == PNum)
	{
		return 0;
	}
}
int PeriodicalsList::search_CN(string CN)//CN查找
{
	int i;
	for (i = 0; i < PNum; i++)
	{
		if (PList[i].get_CN() == CN)
			return i;
	}
	if (i == PNum)
	{
		return 0;
	}
}
int PeriodicalsList::search_Issue(string Issue)//刊期查找
{
	int i;
	for (i = 0; i < PNum; i++)
	{
		if (PList[i].get_Issue() == Issue)
			return i;
	}
	if (i == PNum)
	{
		return 0;
	}
}
int PeriodicalsList::search_Level(string Level)//刊期查找
{
	int i;
	for (i = 0; i < PNum; i++)
	{
		if (PList[i].get_Level() == Level)
			return i;
	}
	if (i == PNum)
	{
		return 0;
	}
}
//查找期刊信息↑
Periodicals PeriodicalsList::PeriodicalsInfor(int i)//获取书本信息
{
	return PList[i];
}
void PeriodicalsList::update(int i, Periodicals p)//修改期刊信息，指定下标
{
	PList[i].setName(p.get_name());//需要修改期刊的期刊名来自对象b输入的书名
	PList[i].setPrice(p.get_price());
	PList[i].setCA(p.get_CA());
	PList[i].setCN(p.get_CN());
	PList[i].setIssue(p.get_Issue());
	PList[i].setLevel(p.get_Level());
}
void PeriodicalsList::deleted(int i)
{
	int j;
	for (j = i; j < (PNum - 1); j++)
	{
		PList[j].setName(PList[j + 1].get_name());//删除后第j本书的新书名来自j+1本的书名，其他同理
		PList[j].setPrice(PList[j + 1].get_price());
		PList[j].setCA(PList[j + 1].get_CA());
		PList[j].setCN(PList[j + 1].get_CN());
		PList[j].setIssue(PList[j + 1].get_Issue());
		PList[j].setLevel(PList[j + 1].get_Level());
	}
	PNum--;
}