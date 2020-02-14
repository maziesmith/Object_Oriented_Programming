#include <iostream>
#include <string>
using namespace std;

int main()
{
	string city, area, street, building;
	cout << "시 : ";
	cin >> city;
	cout << "구 : ";
	cin >> area;
	cout << "로 : ";
	cin >> street;
	cout << "건물명 : ";
	cin >> building;
	cout << endl;
	string address = city + area + street + building;
	cout << "집 주소 : " << address << endl;
	return 0;
}