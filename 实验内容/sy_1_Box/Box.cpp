#include "Box.h"
void Box::get_value() {
	cout << "�����볤����ĳ���ߣ�" << endl;
	cout << "��:"; cin >> length;
	cout << "��:"; cin >> width;
	cout << "��:"; cin >> height;
}
void Box::volume() {
	cout << "���V=��" << length << "*" << width << "*" << height << "��" << endl;
}
void Box::display_volume() {
	cout << "�ɵó��������Ϊ��" << (length * width * height) << endl;
}
void Box::s_area() {
	cout << "�����S=��" << length << "*" << width << "+" << length << "*" << height << "+" << width << "*" << height << "��" << "*2" << endl;
}
void Box::display_s_area() {
	cout << "�ɵ� ������ı����Ϊ��" << (length * width * 2 + width * height * 2 + length * height * 2) << endl;
}
