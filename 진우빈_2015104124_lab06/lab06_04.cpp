#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
	string name;
	int id;
	string major;
	vector<string> subject;
	vector<char> grade;
public:
	Student() {
		name = "default";
		id = 0;
		major = "depart";
	}
	Student(string student_name, int student_id, string student_major) {
		name = student_name;
		id = student_id;
		major = student_major;
	}

	void setName(string _name) {
		name = _name;
	}

	void setID(int _id) {
		id = _id;
	}

	void setdept(string _major) {
		major = _major;
	}

	void print() {
		cout << name << " " << id << " " << major << endl;
	}

	void addGrade(string _subject, char _grade) {
		subject.push_back(_subject);
		grade.push_back(_grade);
	}

	void printGrades() {
		for (int i = 0; i < subject.size(); i++) {
			cout << subject[i] << " " << grade[i] << endl;
		}

		double sum = 0.0;

		for (int j = 0; j < grade.size(); j++) {

			switch (grade[j]) {
			case 'A':
				sum += 4;
				break;
			case 'B':
				sum += 3;
				break;
			case 'C':
				sum += 2;
				break;
			case 'D':
				sum += 1;
				break;
			case 'F':
				sum += 0;
				break;

			}

		}
		double average;
		average = sum / grade.size();
		cout << "GPA : " << average << endl;

	}

	void getYear(int current_year) {
		int enter_year;
		int difference;
		enter_year = id / 1000000;
		difference = current_year - enter_year;
		switch (difference) {
		case(0):
			cout << "Freshman(1학년)" << endl;
			break;
		case(1):
			cout << "Sophomore(2학년)" << endl;
			break;
		case(2):
			cout << "Junior(3학년)" << endl;
			break;
		case(3):
			cout << "Senior(4학년)" << endl;
			break;
		default:
			if (difference >= 4) {
				cout << "About to graduate(5학년 이상)" << endl;
			}
			break;

		}

	}

};


int main() {
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << endl << endl;

	Student ron;
	ron.print();
	cout << endl;
	ron.setName("오창현");
	ron.setID(2015104063);
	ron.setdept("전자공학과");
	ron.print();
	ron.getYear(2019);
	ron.addGrade("확랜", 'B');
	ron.addGrade("반공", 'B');
	ron.addGrade("기공설", 'A');
	ron.printGrades();

	return 0;

}