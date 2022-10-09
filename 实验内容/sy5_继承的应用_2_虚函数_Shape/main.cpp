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
	cout << "圆的面积：" << shape[0]->area() << endl;
	cout << "圆的周长：" << shape[0]->Circumference() << endl;
	cout << "-----------------------------------" << endl;
	Square square;
	cin >> square;
	cout << square;
	shape[1] = &square;
	shape[1]->ShapeName();
	cout << "正方形的面积：" << shape[1]->area() << endl;
	cout << "正方形的周长：" << shape[1]->Circumference() << endl;
	cout << "-----------------------------------" << endl;
	Tirangle triangle;
	cin >> triangle;
	cout << triangle;
	shape[2] = &triangle;
	shape[2]->ShapeName();
	cout << "三角形形的面积：" << shape[2]->area() << endl;
	cout << "三角形的周长：" << shape[2]->Circumference() << endl;
}