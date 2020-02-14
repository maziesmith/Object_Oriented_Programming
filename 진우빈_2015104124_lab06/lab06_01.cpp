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

	void setNumber(int number) {
		id = number;
	}

	void setName(string names) {
		name = names;
	}

	void setMajor(string majors) {
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

int main() {
	CStudent s1;
	s1.Display();

	CStudent s2(1999000000, "����ö", "���ؿ�ȭ��");
	s2.Display();

	s1.setNumber(2006000000);
	s1.setName("�ΰ���");
	s1.setMajor("����Ʈ���");
	cout << "�й� : " << s1.getNumber() << endl;
	cout << "�̸� : " << s1.getName() << endl;
	cout << "���� : " << s1.getMajor() << endl;

	return 0;
}
