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
		name = "ȫ�浿";
		major = "��ǻ�Ͱ��а�";
	}

	CStudent(int student_id, string student_name, string student_major) {
		id = student_id;
		name = student_name;
		major = student_major;
	}

	void Display() {
		cout << "�й� : " << id << endl;
		cout << "�̸� : " << name << endl;
		cout << "���� : " << major << endl;
		cout << endl;
	}

	void setNumber(int& number) {
		cout << "�й� : ";
		cin >> number;
		id = number;
	}

	void setName(string& names) {
		cout << "�̸� : ";
		cin >> names;
		name = names;
	}

	void setMajor(string& majors) {
		cout << "���� : ";
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
		cout << length + 1 << " ��° �л� �Է�" << endl;
		s[length].setNumber(inputNumber);
		s[length].setName(inputName);
		s[length].setMajor(inputMajor);
		if (s[length].getNumber() == s[length - 1].getNumber()) {
			cout << "�ߺ��� �й��� �����մϴ�" << endl;
			cout << endl;
		}
		else {
			cout << "�Է� �Ϸ�" << endl;
			cout << endl;
			length++;
		}
		if (length == 3) {
			cout << "----��� �Է��� �Ϸ�Ǿ����ϴ�.----" << endl;
			for (int i = 0; i < length; i++) {
				cout << i + 1 << "�л�����" << endl;
				cout << "�й� :" << s[i].getNumber() << endl;
				cout << "�̸� :" << s[i].getName() << endl;
				cout << "���� :" << s[i].getMajor() << endl;
				cout << endl;
			}
			length++;
		}
		if (length == 4) {
			break;
		}
	}
}