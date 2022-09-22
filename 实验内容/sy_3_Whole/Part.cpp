#include "Part.h"
Part::Part()
{
    val = 0;
    cout << "Part类的默认构造函数被调用" << endl;
}
Part::Part(int x)
{
    val = x;
    cout << "Part类的一个参数的构造函数被调用" << "," << val << endl;
}
Part::~Part()
{
    cout << "Part类的析构函数被调用" << "," << val << endl;
}