#pragma once
#include "Part.h"
#include <iostream>
using namespace std;
#ifndef WHOLE_H
#define WHOLE_H
class Whole
{
private:
    Part p1;  //Part子对象p1   
    Part p2; //Part子对象p2
    Part p3;
public:
    Whole(int i);  // Whole的有参构造函数   
    Whole() {};     //Whole的无参构造函数 
    ~Whole();      //Whole的析构函数    
};
#endif // !WHOLE_H
