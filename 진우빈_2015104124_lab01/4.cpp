#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int A, B;
	int temp;
	cout << "Please enter two integer values :" << endl;
	cout << "A : ";
	cin >> A;
	
	cout << "B : ";
	cin >> B;
	cout << endl;


	temp = A;
	A = B;
	B = temp;

	cout << "value of A is : " << A << endl;
	cout << "value of B is : " << B;
	
 

}