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
		cout << "이    름 : " << name << endl;
		cout << "학    번 : " << id << endl;
		cout << "소속학과 : " << department << endl;
		cout << "학    년 : " << grade << endl;
		cout << "이수학점 : " << credit << endl;
		cout << "동아리명 : " << dongari << endl;
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
		cout << "이    름 : " << name << endl;
		cout << "학    번 : " << id << endl;
		cout << "소속학과 : " << department << endl;
		cout << "학    년 : " << grade << endl;
		cout << "이수학점 : " << credit << endl;
		cout << "조교유형 : ";
		if (flag)
			cout << "교육조교" << endl;
		else
			cout << "연구조교" << endl;
		cout << "장학비율 : " << ratio << endl;
		cout << "=============================" << endl;
	}
};

int main() {
	Student Std;
	Graduate Kang("강석원", 2018311025, "컴퓨터공학과", 1, 18, false, 0.5);
	UnderGraduate Hong("홍길동", 20141111, "컴퓨터공학과", 2, 80, "알고리즘동아리");

	Std.print();
	Kang.print();
	Hong.print();
	return 0;
}