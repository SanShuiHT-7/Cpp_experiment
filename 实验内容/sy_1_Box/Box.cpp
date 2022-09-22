#include "Box.h"
void Box::get_value() {
	cout << "请输入长方体的长宽高：" << endl;
	cout << "长:"; cin >> length;
	cout << "宽:"; cin >> width;
	cout << "高:"; cin >> height;
}
void Box::volume() {
	cout << "体积V=（" << length << "*" << width << "*" << height << "）" << endl;
}
void Box::display_volume() {
	cout << "可得长方体体积为：" << (length * width * height) << endl;
}
void Box::s_area() {
	cout << "表面积S=（" << length << "*" << width << "+" << length << "*" << height << "+" << width << "*" << height << "）" << "*2" << endl;
}
void Box::display_s_area() {
	cout << "可得 长方体的表面积为：" << (length * width * 2 + width * height * 2 + length * height * 2) << endl;
}
