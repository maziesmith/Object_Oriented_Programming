#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	string s1;
	string s2;
	string common;
	int result = 0;

	cout << "두 단어를 입력해주세요 : ";
	cin >> s1 >> s2;


	for (int i = 0; i < s1.size(); i++) {
		for (int j = 0; j < s2.size(); j++) {
			if (s1.at(i) == s2.at(j)) {
				common += s1.at(i);
			}

		}
	}

	result = s1.size() + s2.size() - common.size();
	cout << result;

}