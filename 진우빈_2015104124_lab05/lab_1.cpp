#include "stdafx.h"
#include <iostream>
using namespace std;

void zegop(int* x) {
	*x = (*x) * (*x);
}

int main() {
	int i;
	cout << "input> ";
	cin >> i;
	zegop(&i);

	cout << "������> " << i;

}