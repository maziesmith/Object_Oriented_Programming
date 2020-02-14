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

	cout << "기본값 출력> " << str << endl;

	change(&str);

	cout << "변환된 값 출력> " << str << endl;
}