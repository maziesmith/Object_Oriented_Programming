#include "stdafx.h"
#include <iostream>
using namespace std;

float sum(int x, int y);
float sub(int x, int y);
float mult(int x, int y);
float idiv(int x, int y);
float add_mult (int x, int y, int z);
float mult_div (int x, int y, int z);
float add_mult_add (int x, int y, int z);
float sub_div_sub(int x, int y, int z);

int main() {
	int x, y, z;
	cout << "x입력 : ";
	cin >> x;
	cout << "y입력 : ";7
		6
	cin >> y;
	cout << "z입력 : ";
	cin >> z;
	cout << "(x + y) * z = " << add_mult(x, y, z) << endl;
	cout << "(x * y) / z = " << mult_div(x, y, z) << endl;
	cout << "(x + y) * (y + z) = " << add_mult_add(x, y, z) << endl;
	cout << "(x - y) / (x - z)  = " << sub_div_sub(x, y, z) << endl;
}

float sum(int x, int y) {
	return (float)x + y;
}

float sub(int x, int y) {
	return (float)x - y;
}

float mult(int x, int y) {
	return (float)x * y;
}

float idiv(int x, int y) {
	float z;
	z = (float)x / y;
	return z;
}

float add_mult(int x, int y, int z) {
	return sum(x, y) * z;
}

float mult_div(int x, int y, int z) {
	return mult(x, y) / z;
}
float add_mult_add(int x, int y, int z) {
	return sum(x, y) * sum(y, z);
}
float sub_div_sub(int x, int y, int z) {
	return sub(x, y) / sub(x, z);
}