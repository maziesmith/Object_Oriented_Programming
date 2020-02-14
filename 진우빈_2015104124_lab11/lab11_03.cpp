#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void print(vector<vector<int>>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			cout << setw(4) << v[i][j];
		}
		cout << endl;
	}

}

void sdoku(vector<vector<int>>& v) {
	int x = 0;
	int y = (v.size() - 1) / 2;
	for (int i = 1; i <= v.size() * v.size(); i++) {
		v[x][y] = i;
		if (i%v.size() == 0)
			x++;
		else {
			x--;
			y++;
		}

		if (x < 0)
			x = v.size() - 1;
		else if (y > v.size() - 1)
			y = 0;
	}
}

int main() {
	int odd;
	cout << "홀수 숫자를 하나 입력해 주세요 : ";
	cin >> odd;
	if (odd % 2 == 0) {
		cout << "홀수로 입력해주세요." << endl;
		return 0;
	}
	vector<vector<int>>v(odd, vector<int>(odd));
	cout << endl;
	sdoku(v);
	print(v);



}