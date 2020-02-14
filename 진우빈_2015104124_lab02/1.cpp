#include "stdafx.h"
#include <iostream>
using namespace std;

#include "stdafx.h"
#include <iostream>
using namespace std;

float sum(int x, int y);
float sub(int x, int y);
float mult(int x, int y);
float idiv(int x, int y);


int main() {
	int x, y;
	cout << "x입력 : ";
	cin >> x;
	cout << "y입력 : ";
	cin >> y;
	cout << "x + y = " << sum(x, y) << endl;
	cout << "x - y = " << sub(x, y) << endl;
	cout << "x * y = " << mult(x, y) << endl;
	cout << "x / y = " << idiv(x, y) << endl;
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