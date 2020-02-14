#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, y;
	cout << "x 입력 : ";
	cin >> x;
	cout << "y 입력 : ";
	cin >> y;

	cout << sqrt(x) << endl;
	cout << exp(x) << endl;
	cout << log10(x) << endl;
	cout << cos(x) << endl;
	cout << pow(x, y) << endl;
	cout << fabs(x) << endl;

}