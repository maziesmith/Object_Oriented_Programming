#include <iostream>
#include <string>
using namespace std;

int main()
{
	string city, area, street, building;
	cout << "�� : ";
	cin >> city;
	cout << "�� : ";
	cin >> area;
	cout << "�� : ";
	cin >> street;
	cout << "�ǹ��� : ";
	cin >> building;
	cout << endl;
	string address = city + area + street + building;
	cout << "�� �ּ� : " << address << endl;
	return 0;
}