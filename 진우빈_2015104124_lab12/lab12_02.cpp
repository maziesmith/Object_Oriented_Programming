#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int r = rand() % 100 + 1;
	vector<int> list(r);
	int cnt = -1;
	while (1) {
		cnt++;
		try {
			list.at(cnt) = cnt;
		}

		catch (exception& e) {
			cout << "���� list�� " << cnt-1 << "�� ũ�⸦ ������ �ִ�." << endl;
			break;
		}
	}

	return 0;

}