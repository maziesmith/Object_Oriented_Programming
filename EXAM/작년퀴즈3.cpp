#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
	string name;
	string id;
	string code[100];
	int numCourseTaken;

public:
	Student() {
		name = "default";
		id = "default";
		numCourseTaken = 0;
		
	}

	Student(string name, string id) {
		this->name = name;
		this->id = id;
		numCourseTaken = 0;
	}

	void setName(string name) {
		this->name = name;
	}

	void setId(string id) {
		this->id = id;
	}

	string getName() const {
		return name;
	}

	string getId() const {
		return id;
	}

	string getCode(int index) const {
		return code[index];
	}

	void addCourse(string codes) {
		code[numCourseTaken] = codes;
		numCourseTaken++;

	}

	friend ostream& operator<<(ostream&os, const Student& student) {
		return os << "ID :" << student.getId() << "\t" << "Name :" <<
			student.getName() << "\t" << "Courses(taking) :" << student.getCode(0) << " " << student.getCode(1);
	}

	friend class KHUIS;

};

class Course {
private:
	string name;
	string code;
	friend class KHUIS;

public:
	Course() {
		name = "default";
		code = "default";
	}

	Course(string name, string code) {
		this->name = name;
		this->code = code;
		cout << "help" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void setCode(string code) {
		this->code = code;
	}

	string getName() const {
		return name;
	}

	string getCode() const {
		return code;
	}

	friend ostream& operator<<(ostream&os, const Course& course) {
		return os << "Code :" << course.getCode() << "\t" << "Name :" << course.getName();
	}

	friend class KHUIS;

};

class KHUIS {
public:
	void printinfo(Student& student, Course* pCourse, int numCourse) {
		cout << "[Student and Course Information]" << endl;
		cout << "ID :" << student.getId() << "\t" << "Name :" <<
			student.getName() << "\t" << "Courses(taking) :" << student.getCode(0) << " " << student.getCode(1) << endl;
		
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2; j++) {
				if (pCourse[i].getCode()== student.getCode(j)) {
					cout << "Code :" << pCourse[i].getCode() << "\t" << "Name :" << pCourse[i].getName() << endl;
				}

			}
		}
		cout << endl;
		cout << endl;

	}

};

int main() {
	int numTotalCourse = 3;
	Course *pCourse = new Course[numTotalCourse];
	pCourse[0].setName("°´Ã¼ÁöÇâÇÁ·Î±×·¡¹Ö");
	pCourse[0].setCode("CSE100");

	pCourse[1].setName("¿µ»óÃ³¸®");
	pCourse[1].setCode("CSE200");

	pCourse[2].setName("¸Ó½Å·¯´×");
	pCourse[2].setCode("CSE300");

	cout << pCourse[0].getCode() << '\t' << pCourse->getName() << endl;
	cout << setw(50) << setfill('-') << "" << endl;

	cout << pCourse[0] << endl;
	cout << pCourse[1] << endl;
	cout << pCourse[2] << endl;
	cout << setw(50) << setfill('-') << "" << endl;

	Student stu1("È«±æµ¿", "20181004"), stu2;
	stu1.addCourse("CSE100");
	stu1.addCourse("CSE200");

	stu2.setName("±è¿µÈñ");
	stu2.setId("20182000");
	stu2.addCourse("CSE100");
	stu2.addCourse("CSE300");

	cout << stu1.getId() << '\t' << stu1.getName() << '\t' << stu1.getCode(0) << endl;
	cout << setw(50) << setfill('-') << "" << endl;

	cout << stu1 << endl;
	cout << stu2 << endl;
	cout << setw(50) << setfill('-') << "" << endl;

	KHUIS khuis;
	khuis.printinfo(stu1, pCourse, numTotalCourse);
	khuis.printinfo(stu2, pCourse, numTotalCourse);

	delete[] pCourse;

	return 0;

}

