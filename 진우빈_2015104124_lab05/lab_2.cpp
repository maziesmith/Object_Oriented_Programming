#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void change(string* str) {
	cout << "Input> ";
	cin >> *str;

}

int main() {
	string str = "this is default value";

	cout << "�⺻�� ���> " << str << endl;

	change(&str);

	cout << "��ȯ�� �� ���> " << str << endl;
}