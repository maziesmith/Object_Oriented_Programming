#include <iostream>
#include <string>
using namespace std;

int main() {
	string database[8] = { "���", "���α׷���", "����", "����ǹٺ�", "���뿪", "õ���ǻ��", "�����", "��ü����" };
	string keyword;
	cout << "Ű���� : ";
	cin >> keyword;
	for (int i = 0; i < 8; i++) {
		if (database[i].find(keyword) >=0 && database[i].find(keyword) <=10) {
			cout << database[i] << "  ";
		}
	}
	return 0;
}