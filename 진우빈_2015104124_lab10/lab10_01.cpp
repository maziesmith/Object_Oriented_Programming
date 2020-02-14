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
		cout << "첫번째 x : ";
		cin >> this->x1;
		cout << "첫번째 y : ";
		cin >> this->y1;
		cout << "두번째 x : ";
		cin >> this->x2;
		cout << "두번째 y : ";
		cin >> this->y2;
	}


	void print() {
		type distance;
		distance = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
		distance = sqrt(distance);
		cout << "두 점 사이의 거리 = " << distance << endl;
	}
};

int main()
{
	Point<int> p;

	p.setPointFromKeybord();
	p.print();
	return 0;
}