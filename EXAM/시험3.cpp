#include <iostream>
#include <string>
using namespace std;

bool ReadEquation(int& operand1, char& a, int& operand2) {
	cout << "정수계산을 위한 수식을 입력(예: 12+13) ---";
	bool yesorno = true;
	cin >> operand1 >> a >> operand2;
	if (cin.fail()) {
		yesorno = false;
		cout << "Read Error" << endl;
	}
	return yesorno;
}

bool Evaluate(int operand1, char a, int operand2, int& result) {
	switch (a) {
	case '+':
		result = operand1 + operand2;
		break;
		return 1;
	case '-':
		result = operand1 - operand2;
		break;
		return 1;
	case '*':
		result = operand1 * operand2;
		break;
		return 1;
	case '/':
		result = operand1 / operand2;
		break;
		return 1;

	default:
		return 0;
	}

}

bool Accumulate(int num, int& result) {
	int operand1, operand2;
	char a;
	bool yesorno = true;

	/*while (num > 0) {
		if (ReadEquation(operand1, a, operand2) == 0 || Evaluate(operand1, a, operand2, result) == 0) {
			yesorno = false;
			break;
		}
		num--;
	}*/

	int sum = 0;
	do {
		if (ReadEquation(operand1, a, operand2) == 0 || Evaluate(operand1, a, operand2, result) == 0) {
			yesorno = false;
			break;
		}
		sum += result;
		num--;
	} while (num > 0);

	if (yesorno == 1) {
		cout << endl;
		cout << "Total : " << sum << endl;
	}
	else {
		cout << "%%% compulation interrupted" << endl;
	}

	return yesorno;

}

int main()
{
	int operand1, operand2, result;
	char a;
	ReadEquation(operand1, a, operand2);
	Evaluate(operand1, a, operand2, result);
	cout << operand1 << a << operand2 << " = " << result << endl;
	cout << endl;

	cout << "### loop을 이용하여 수식을 3번 입력받아 계산하고 그 결과의 값을 출력 ###" << endl;
	Accumulate(3, result);
}