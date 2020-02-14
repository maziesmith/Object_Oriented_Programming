#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
void sort(vector<T>& v) {
	int min;
	T temp;
	for (int i = 0; i < v.size(); i++) {
		min = i;
		for (int j = i + 1; j < v.size(); j++) {
			if (v[min] > v[j])
				min = j;
		}
		temp = v[min];
		v[min] = v[i];
		v[i] = temp;

	}
}

template<typename T>
void print(vector<T>& v) {
	for (auto iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << ", ";
	cout << endl;
}

int main() {
	vector<int> int_list(5);
	int_list = { 10,5,8,1,3 };
	vector<double> double_list(5);
	double_list = { 10.1,5.1,8.1,1.1,3.1 };
	vector <string> string_list(5);
	string_list = { "하나","둘","셋","넷","다섯" };

	sort(int_list);
	sort(double_list);
	sort(string_list);

	print(int_list);
	print(double_list);
	print(string_list);
}