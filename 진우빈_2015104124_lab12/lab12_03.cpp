#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class FileNotFoundException : public exception {
	string message;

public:
	FileNotFoundException(const string& fname) :
		message("File " + fname + " not found") {}

	const char* what() const override {
		return message.c_str();
	}
};

class CStudent {
	string m_Name;
	int m_Number;
	string m_Major;

public:
	CStudent() {}
	~CStudent() {}

	void setName(string n) { m_Name = n; }
	string getName() { return m_Name; }

	void setNumber(int n) { m_Number = n; }
	int getNumber() { return m_Number; }

	void setMajor(string n) { m_Major = n; }
	string getMajor() { return m_Major; }

	void setAll(string name, int number, string major) {
		m_Name = name;
		m_Number = number;
		m_Major = major;
	}

	void Display() {
		cout << "이름 : " << m_Name << endl;
		cout << "학번 : " << m_Number << endl;
		cout << "전공 : " << m_Major << endl;
		cout << endl;
	}

};

vector<CStudent> read_file(string& filename) {
	vector<CStudent> temp;
	string line, line2;
	ifstream fin;
	int index = 0;
	fin.open(filename);
	if (fin.good()) {
		while (getline(fin, line)) {
			CStudent stu;
			int count = 0;
			while (count < 3) {
				if (count == 0) {
					index = line.find(' ');
					line2 = line.substr(0, index);
					stu.setName(line2);
				}
				if (count == 1) {
					line2 = line.substr(index + 1, 10);
					stu.setNumber(stoi(line2));
				}

				if (count ==2) {
					line2=line.substr(index+12);
					stu.setMajor(line2);
				}
				count++;
			}
			temp.push_back(stu);
		}
	}
	else {
		throw FileNotFoundException(filename);
	}
	return temp;

}


int main() {

	string str;

	cout << "파일 이름 :";
	cin >> str;

	try {
		vector<CStudent> numbers = read_file(str);
		for (CStudent value : numbers)
			value.Display();
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}


}

