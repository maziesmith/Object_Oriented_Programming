#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string word;
	cout << "���ڿ� �ϳ��� �Է����ּ��� : ";
	cin >> word;
	string word_reversed = word;
	reverse(word_reversed.begin(), word_reversed.end());


	cout << "�Է��Ͻ� ���ڿ��� ���� : " << word_reversed << endl;
	[](string x, string y) {
		if (x==y)
			cout << "�� ���ڴ� ȸ���Դϴ�." << endl;
		else
			cout << "�� ���ڴ� ȸ���� �ƴմϴ�." << endl;


	}(word, word_reversed);

}
