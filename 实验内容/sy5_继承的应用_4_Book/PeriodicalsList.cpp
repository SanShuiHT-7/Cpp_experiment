#include "PeriodicalsList.h"
PeriodicalsList::PeriodicalsList()
{
	PNum = 0;
}
void PeriodicalsList::insert(Periodicals p)//�����ڿ�
{
	PList[PNum].setName(p.get_name());//��������ڿ�
	PList[PNum].setPrice(p.get_price());
	PList[PNum].setCA(p.get_CA());
	PList[PNum].setCN(p.get_CN());
	PList[PNum].setIssue(p.get_Issue());
	PList[PNum].setLevel(p.get_Level());
	PNum++;//ͼ����ӳɹ�������ͼ����ĿbookNum+1
}
void PeriodicalsList::showPeriodicals(int i)//��ӡĳһ����
{
	//cout << left << setw(15) << bookList[i].get_name() << setw(15) << bookList[i].get_price() << setw(15) << bookList[i].get_isbn() << setw(15) << bookList[i].get_publisher() << setw(15) << bookList[i].get_author() << endl;
	cout << PList[i];//ʹ�����������
}
void PeriodicalsList::showPeriodicals_title()//��ӡ��ͷ
{

	cout << left << setw(15) << "�ڿ���" << setw(15) << "�۸�" << setw(15) << "���ܵ�λ" << setw(15) << "����" << setw(15) << "����" << setw(15) << "����" << endl;
}
void PeriodicalsList::showAll_P()//��ӡ�����鱾
{
	int j;
	j = PNum;
	if (j == 0)
	{
		cout << "��ϵͳ��δ�洢ͼ��" << endl;
	}
	else
	{
		cout << "���� " << j << " ��ͼ��洢ϵͳ�У�" << "���£�" << endl;
		showPeriodicals_title();
	}

	for (PNum = 0; PNum < j; PNum++)
	{
		showPeriodicals(PNum);
	}
}//����ͼ����Ϣ��
int PeriodicalsList::search_name(string Name)//��������
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
int PeriodicalsList::search_price(float Price)//�۸����
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
int PeriodicalsList::search_CA(string CA)//CA����
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
int PeriodicalsList::search_CN(string CN)//CN����
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
int PeriodicalsList::search_Issue(string Issue)//���ڲ���
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
int PeriodicalsList::search_Level(string Level)//���ڲ���
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
//�����ڿ���Ϣ��
Periodicals PeriodicalsList::PeriodicalsInfor(int i)//��ȡ�鱾��Ϣ
{
	return PList[i];
}
void PeriodicalsList::update(int i, Periodicals p)//�޸��ڿ���Ϣ��ָ���±�
{
	PList[i].setName(p.get_name());//��Ҫ�޸��ڿ����ڿ������Զ���b���������
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
		PList[j].setName(PList[j + 1].get_name());//ɾ�����j���������������j+1��������������ͬ��
		PList[j].setPrice(PList[j + 1].get_price());
		PList[j].setCA(PList[j + 1].get_CA());
		PList[j].setCN(PList[j + 1].get_CN());
		PList[j].setIssue(PList[j + 1].get_Issue());
		PList[j].setLevel(PList[j + 1].get_Level());
	}
	PNum--;
}