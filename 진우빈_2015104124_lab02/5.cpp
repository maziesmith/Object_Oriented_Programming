#include "stdafx.h"
#include <iostream>
using namespace std;

void get_data(int& x, int& y);
void swap_call_by_value(int x, int y);
void swap_call_by_reference(int& x, int& y); // ���ϰ��� �ϳ��� ������ �����Ѵ�.

int main() {
	int x, y;
	get_data(x, y);
	cout << "swap_call_by_value �Լ� ��� �� " << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "swap_call_by_value �Լ� ��� �� " << endl;
	swap_call_by_value(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	cout << "swap_call_by_reference �Լ� ��� �� " << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "swap_call_by_reference �Լ� ��� �� " << endl;
	swap_call_by_reference(x, y);
	cout << "x = " << x << ", y = " << y << endl;

}

void get_data(int& x, int& y) {
	cout << "x �Է� : ";
	cin >> x;
	cout << "y �Է� : ";
	cin >> y;
}

void swap_call_by_value(int x, int y) {
	int temp;
	temp = y;
	y = x;
	x = temp;
}

void swap_call_by_reference(int& x, int& y) {
	int temp;
	temp = y;
	y = x;
	x = temp;
}