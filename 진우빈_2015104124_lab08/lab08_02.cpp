#include <iostream>
#include <cmath>
#define PI 3.14
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


class Triangle : public Polygon {
public:
	Triangle(int point, float length) {
		mPoint = point;
		mLength = length;
	}

	~Triangle() {

	}

	void calcGrith() override {
		cout << "Grith : " << mPoint * mLength << endl;
	}

	void calcArea() override {
		cout << "Area : " << sqrt(3)*mLength*mLength / 4 << endl;
	}


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

class Circle : public Polygon {
public:
	Circle(int point, float length) {
		mPoint = point;
		mLength = length;
	}

	~Circle() {

	}

	void calcGrith() override {
		cout << "Grith : " << 2 * PI * mLength << endl;
	}

	void calcArea() override {
		cout << "Area : " << PI * mLength * mLength << endl;
	}


 };




int main()
{
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);

	cout << "--- Triangle class ---" << endl;
	tri.calcGrith();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGrith();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcGrith();
	cir.calcArea();



	return 0;
}