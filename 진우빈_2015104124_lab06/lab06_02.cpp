#include <iostream>
#include <string>
using namespace std;

class CStudent {
	int id;
	string name;
	string major;

public:
	CStudent() {
		id = 2018000000;
		name = "홍길동";
		major = "컴퓨터공학과";
	}

	CStudent(int student_id, string student_name, string student_major) {
		id = student_id;
		name = student_name;
		major = student_major;
	}

	void Display() {
		cout << "학번 : " << id << endl;
		cout << "이름 : " << name << endl;
		cout << "전공 : " << major << endl;
		cout << endl;
	}

	void setNumber(int& number) {
		cout << "학번 : ";
		cin >> number;
		id = number;
	}

	void setName(string& names) {
		cout << "이름 : ";
		cin >> names;
		name = names;
	}

	void setMajor(string& majors) {
		cout << "전공 : ";
		cin >> majors;
		major = majors;
	}

	int getNumber() {
		return id;
	}

	string getName() {
		return name;
	}

	string getMajor() {
		return major;
	}

};

int main()
{
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {
		cout << length + 1 << " 번째 학생 입력" << endl;
		s[length].setNumber(inputNumber);
		s[length].setName(inputName);
		s[length].setMajor(inputMajor);
		if (s[length].getNumber() == s[length - 1].getNumber()) {
			cout << "중복된 학번이 존재합니다" << endl;
			cout << endl;
		}
		else {
			cout << "입력 완료" << endl;
			cout << endl;
			length++;
		}
		if (length == 3) {
			cout << "----모든 입력이 완료되었습니다.----" << endl;
			for (int i = 0; i < length; i++) {
				cout << i + 1 << "학생정보" << endl;
				cout << "학번 :" << s[i].getNumber() << endl;
				cout << "이름 :" << s[i].getName() << endl;
				cout << "전공 :" << s[i].getMajor() << endl;
				cout << endl;
			}
			length++;
		}
		if (length == 4) {
			break;
		}
	}
}