#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
using namespace std;
int main()
{
	Shape* shape[3];
	Circle circle;
	cin >> circle;
	cout << circle;
	shape[0] = &circle;
	shape[0]->ShapeName();
	cout << "Բ�������" << shape[0]->area() << endl;
	cout << "Բ���ܳ���" << shape[0]->Circumference() << endl;
	cout << "-----------------------------------" << endl;
	Square square;
	cin >> square;
	cout << square;
	shape[1] = &square;
	shape[1]->ShapeName();
	cout << "�����ε������" << shape[1]->area() << endl;
	cout << "�����ε��ܳ���" << shape[1]->Circumference() << endl;
	cout << "-----------------------------------" << endl;
	Tirangle triangle;
	cin >> triangle;
	cout << triangle;
	shape[2] = &triangle;
	shape[2]->ShapeName();
	cout << "�������ε������" << shape[2]->area() << endl;
	cout << "�����ε��ܳ���" << shape[2]->Circumference() << endl;
}