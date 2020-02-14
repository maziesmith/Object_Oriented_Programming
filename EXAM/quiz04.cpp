#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
class Array {
private:
	T* list; 
	int length;

public:
	Array(int n) {
		list = new T[n];
		length = 0;
	}

	~Array() {};

	void append(T number) {
		list[length] = number;
		length++;
		sort(list, list + length);
		
	}

	void print() {
		for (int i = 0; i < length; i++)
			cout << "[" << i << "]:" << list[i] << "\t";
		cout << endl;
	}

};

int main() {
	Array <int> iAry(50);
	iAry.append(5);
	iAry.append(13);
	iAry.append(1);
	iAry.append(7);
	iAry.print();

	Array <double> dAry(50);
	dAry.append(11.23);
	dAry.append(3.41);
	dAry.append(7.31);
	dAry.append(5.2);
	dAry.print();

	return 0;
}