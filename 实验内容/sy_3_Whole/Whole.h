#pragma once
#include "Part.h"
#include <iostream>
using namespace std;
#ifndef WHOLE_H
#define WHOLE_H
class Whole
{
private:
    Part p1;  //Part�Ӷ���p1   
    Part p2; //Part�Ӷ���p2
    Part p3;
public:
    Whole(int i);  // Whole���вι��캯��   
    Whole() {};     //Whole���޲ι��캯�� 
    ~Whole();      //Whole����������    
};
#endif // !WHOLE_H
