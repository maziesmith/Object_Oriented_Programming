#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string word;
	cout << "문자열 하나를 입력해주세요 : ";
	cin >> word;
	string word_reversed = word;
	reverse(word_reversed.begin(), word_reversed.end());


	cout << "입력하신 문자열의 역순 : " << word_reversed << endl;
	[](string x, string y) {
		if (x==y)
			cout << "이 문자는 회문입니다." << endl;
		else
			cout << "이 문자는 회문이 아닙니다." << endl;


	}(word, word_reversed);

}
