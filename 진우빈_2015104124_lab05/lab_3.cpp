#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

void change(vector<int>& v) {
	int temp; 
	for (int i = 0; i < v.size() / 2; i++) {
		temp = v[i];
		v[i] = v[v.size() - 1 - i];
		v[v.size() - 1 - i] = temp;
	}
}

int main() {
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "기본 vector 값 : " << endl;

	for (auto elem : v)
		cout << elem << ' ';
	cout << endl;
	
	change(v);

	cout << "함수 실행 후 vector 값 : "  << endl;
	for (auto elem : v)
		cout << elem << ' ';



}