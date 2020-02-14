#include <iostream>
#include <string>
using namespace std;

class Student {

protected:
	string name;
	int id;
	string department;
	int grade;
	int credit;

public:
	Student() {
		name = "default";
		id = 0;
		department = "default";
		grade = 0;
		credit = 0;
	}

	virtual void print() {
		cout << "I'm a student" << endl;
	}

};

class UnderGraduate : public Student {
private:
	string dongari;

public:
	UnderGraduate(string name, int id, string department,
		int grade, int credit, string dongari) {
		this->name = name;
		this->id = id;
		this->department = department;
		this->grade = grade;
		this->credit = credit;
		this->dongari = dongari;
	}

	void print() override {
		cout << "=============================" << endl;
		cout << "��    �� : " << name << endl;
		cout << "��    �� : " << id << endl;
		cout << "�Ҽ��а� : " << department << endl;
		cout << "��    �� : " << grade << endl;
		cout << "�̼����� : " << credit << endl;
		cout << "���Ƹ��� : " << dongari << endl;
		cout << "=============================" << endl;
	}

};

class Graduate : public Student {
private:
	bool flag;
	double ratio;

public:
	Graduate(string name, int id, string department,
		int grade, int credit, bool flag, double ratio) {
		this->name = name;
		this->id = id;
		this->department = department;
		this->grade = grade;
		this->credit = credit;
		this->flag=flag;
		this->ratio = ratio;
	}

	void print() override {
		cout << endl;
		cout << "=============================" << endl;
		cout << "��    �� : " << name << endl;
		cout << "��    �� : " << id << endl;
		cout << "�Ҽ��а� : " << department << endl;
		cout << "��    �� : " << grade << endl;
		cout << "�̼����� : " << credit << endl;
		cout << "�������� : ";
		if (flag)
			cout << "��������" << endl;
		else
			cout << "��������" << endl;
		cout << "���к��� : " << ratio << endl;
		cout << "=============================" << endl;
	}
};

int main() {
	Student Std;
	Graduate Kang("������", 2018311025, "��ǻ�Ͱ��а�", 1, 18, false, 0.5);
	UnderGraduate Hong("ȫ�浿", 20141111, "��ǻ�Ͱ��а�", 2, 80, "�˰��򵿾Ƹ�");

	Std.print();
	Kang.print();
	Hong.print();
	return 0;
}