#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Point {
	double x;
	double y;

public:
	Point();
	Point(double x, double y);
	void setPoint(double x, double y);
	double getX() const;
	double getY() const;
	Point operator-(const Point& point);
	Point operator*(const Point& point);
	Point& operator=(const Point& point);

};

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Point::setPoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Point::getX() const {
	return x;
}

double Point::getY() const {
	return y;
}


Point Point::operator-(const Point& point)
{
	Point result(this->x - point.getX(), this->y - point.getY());
	return result;
}

Point Point::operator*(const Point& point)
{
	Point result((this->x)*(point.getX()), (this->y)*(point.getY()));
	return result;
}

Point& Point::operator=(const Point& point)
{
	this->x = point.getX();
	this->y = point.getY();
	return *this;
}

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point *pP1, *pP2, *pP3;

	cout << "첫번째 좌표[x1, y1]를 입력하세요 : ";
	cin >> x1 >> y1;

	cout << "두번째 좌표[x2, y2]를 입력하세요 : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point();

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);
	
	cout << "두 좌표 사이의 길이는 " << sqrt(pP3->getX() + pP3->getY()) << "입니다." << endl;
	delete pP1;
	delete pP2;
	delete pP3;

	return 0;
}