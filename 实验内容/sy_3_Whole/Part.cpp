#include "Part.h"
Part::Part()
{
    val = 0;
    cout << "Part���Ĭ�Ϲ��캯��������" << endl;
}
Part::Part(int x)
{
    val = x;
    cout << "Part���һ�������Ĺ��캯��������" << "," << val << endl;
}
Part::~Part()
{
    cout << "Part�����������������" << "," << val << endl;
}