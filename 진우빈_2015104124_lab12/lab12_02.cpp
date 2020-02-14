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
			cout << "현재 list는 " << cnt-1 << "의 크기를 가지고 있다." << endl;
			break;
		}
	}

	return 0;

}