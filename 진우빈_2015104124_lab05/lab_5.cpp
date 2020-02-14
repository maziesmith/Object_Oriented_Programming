#include "stdafx.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <time.h>
using namespace std;

void init(vector<vector<int>>& v, int& row, int& col, char a) {
	cout << a << "의 행, 열의 크기를 입력해주세요 : ";
	cin >> row >> col;
	v = vector<vector<int>>(row, vector<int>(col));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			v[i][j] = rand() % 20 - 10;
 		}
	}
		

}

void print(vector<vector<int>>& v, const char* a) {
	cout << a << " 행렬 : " << endl;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << setw(5) << v[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

vector<vector<int>> multiply(vector<vector<int>>& v1, vector<vector<int>>& v2) {
	if (v1[0].size() == v2.size()) {
		vector<vector<int>> result(v1.size(), vector<int>( v1.size() ) );
		for ( int i = 0; i < v1.size(); i++) {
			for ( int j = 0; j < v1.size(); j++) {
				for (int k = 0; k < v2.size(); k++) {
					result[i][j] += (v1[i][k] * v2[k][j]);
				}
			}
		}
		return result;
	}

	else
		cout << "두 행렬을 곱 할 수 없습니다. ";
}


int main() {
	srand(time(NULL));
	int col1, row1, col2, row2;


	vector<vector<int>> A;
	vector<vector<int>> B;
	vector<vector<int>> result;

	init(A, row1, col1, 'A');
	init(B, row2, col2, 'B');

	print(A, "A");
	print(B, "B");

	result = multiply(A, B);

	print(result, "AB");
}