#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
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


void random_matrix(vector<vector<int>>& v) {
	v = vector<vector<int>>(10, vector<int>(10));
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			v[i][j] = rand() % 101;
		}
	}
}

void print_matrix(ofstream& filename, vector<vector<int>>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			filename << setw(4) << v[i][j];
		}
		filename << endl;
	}
}

void read_vector(string& filename) {
	vector<vector<int>> temp;
	ifstream fin;
	string line;
	fin.open(filename);
	if (fin.good()) {
		int row, col;
		int count1 = 0;
		cout << "출력할 행 크기 : ";
		cin >> row;
		cout << "출력할 열 크기 : ";
		cin >> col;
		if (row > 10) {
			return;
		}
		temp = vector<vector<int>>(row, vector<int>(col));
		while (getline(fin, line)) {
			if (count1 == row) {
				break;
			}
			for (int i = 0; i < col; i++) {
				temp[count1][i] = stoi(line.substr(i*4+1, 4));
			}
			count1++;


		}

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << setw(4) << temp[i][j];
			}
			cout << endl;
		}
	}

	else {
		throw FileNotFoundException(filename);
	}

}


int main() {

	vector<vector<int>> v;
	random_matrix(v);

	ofstream fout;
	fout.open("temp.txt");
	
	print_matrix(fout, v);
	fout.close();

	string filename;
	cout << "파일 이름 : ";
	cin >> filename;

	try {
		read_vector(filename);
	}

	catch (exception& e) {
		cout << e.what() << endl;
	}

}

