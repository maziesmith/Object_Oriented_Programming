#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int a) {
	if (a == 0)
		return 0;
	if (a == 1)
		return 1;
	else {
		return fibonacci(a - 2) + fibonacci(a - 1);
	}
}

int main()
{
	int n;
	int *p;

	cout << "n : ";
	cin >> n;

	p = new int[n];
	
	for (int i = 0; i < n; i++) {
		*(p+i) = fibonacci(i);
	}

	for (int i = 0; i < n; i++) {
		cout << *(p + i) << " ";
	}

	delete[] p;
}