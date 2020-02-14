#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void startGame(int* input, int* answer) {
	int n = 1;
	while (1) {
		int Strike = 0;
		int Ball = 0;
		cout << "====================" << n << "====================" << endl;
		cout << "1 ~ 9 범위의 숫자 세개를 입력해주세요 : ";
		cin >> input[0] >> input[1] >> input[2];
		for (int i = 0; i < 3; i++) {
			if (input[i] == answer[i]) {
				Strike++;
			}
		}
		for (int i = 0; i < 3; i++) {
			if (i == 0) {
				if (input[i] == answer[i + 1] || input[i] == answer[i + 2]) {
					Ball++;
				}
			}
			else if (i == 1) {
				if (input[i] == answer[i + 1] || input[i] == answer[i - 1]) {
					Ball++;
				}
			}
			else if (i == 2) {
				if (input[i] == answer[i - 1] || input[i] == answer[i - 2]) {
					Ball++;
				}
			}

		}

		if (Strike == 0 && Ball == 0)
			cout << "Out!!" << endl;
		else 
			cout << Strike << " Strike,  " << Ball << " Ball" << endl;
		cout << endl;


		if (Strike == 3) {
			cout << "정답입니다!" << endl;
			break;
		}

		n++;

		if (n > 9) {
			cout << "패배하였습니다...." << endl;
			break;
		}
	}

}

int main() {
	srand(time(NULL));
	int input[3];
	int answer[3];

	for (int i = 0; i < 3; i++) {
		answer[i] = (rand() % 9) + 1;
		if (i == 0)continue;
		bool flag = true;
		while (flag) {
			for (int j = 0; j < i; j++) {
				if (answer[j] == answer[i]) {
					answer[i] = (rand() % 9) + 1;
					break;
				}
				else if (j == i - 1 && flag == true) flag = false;
			}

		}
	}

	for (int i = 0; i < 3; i++) {
		cout << answer[i] << endl;
	}

	startGame(input, answer);

	return 0;
}