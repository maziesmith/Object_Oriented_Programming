#include <iostream>
#include <string>
using namespace std;

int main() {
	string database[8] = { "사랑", "프로그래밍", "의자", "사랑의바보", "영통역", "천년의사랑", "냉장고", "객체지향" };
	string keyword;
	cout << "키워드 : ";
	cin >> keyword;
	for (int i = 0; i < 8; i++) {
		if (database[i].find(keyword) >=0 && database[i].find(keyword) <=10) {
			cout << database[i] << "  ";
		}
	}
	return 0;
}