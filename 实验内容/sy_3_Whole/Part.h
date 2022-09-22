#pragma once
#include <iostream>
using namespace std;
#ifndef PART_H
#define PART_H
class Part
{
private:
    int val;
public:
    Part();          //Part的无参构造函数    
    Part(int x);  	 // Part的有参构造函数    
    ~Part();         //Part的析构函数

};
#endif // !PART_H

