#include <iostream>
#include <string>
#include <cmath>
using namespace std;

template <typename type>
class Point {

private:
	type x1;
	type y1;
	type x2;
	type y2;

public:

	Point() {
		x1 = 0;
		y1 = 0;
		x2 = 0;
		y2 = 0;
	}

	void setPointFromKeybord() {
		cout << "ù��° x : ";
		cin >> this->x1;
		cout << "ù��° y : ";
		cin >> this->y1;
		cout << "�ι�° x : ";
		cin >> this->x2;
		cout << "�ι�° y : ";
		cin >> this->y2;
	}


	void print() {
		type distance;
		distance = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
		distance = sqrt(distance);
		cout << "�� �� ������ �Ÿ� = " << distance << endl;
	}
};

int main()
{
	Point<int> p;

	p.setPointFromKeybord();
	p.print();
	return 0;
}