#include <iostream>
using namespace std;


class Polygon {
public:
	Polygon() {

	}

	Polygon(int point, float length) {
		mPoint = point;
		mLength = length;
	}

	~Polygon() {

	}

	virtual void calcGrith() {
		cout << "Grith : empty" << endl;

	}
	virtual void calcArea() {
		cout << "Area : empty" << endl;
	}

protected:
	int mPoint;
	double mLength;
};

class Rectangle : public Polygon {
public:
	Rectangle() {
	
	}
	Rectangle(int point, float length) {
		mPoint = point;
		mLength = length;
	}

	~Rectangle() {
	
	}

	void calcGrith() override {
		cout << "Grith : " << mPoint * mLength << endl;
	}
	void calcArea() override {
		cout << "Area : " << mLength * mLength << endl;
	}

};




int main()
{
	Polygon pol;
	Rectangle rec(4, 10);

	cout << "--- Polygon class ---" << endl;
	pol.calcGrith();
	pol.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGrith();
	rec.calcArea();

	return 0;
}