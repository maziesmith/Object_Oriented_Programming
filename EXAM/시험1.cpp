#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void get_data(string& filename, int& row, int& col) {
	cout << "Enter the file name: ";
	cin >> filename;
	cout << "Enter the row and column numbers: ";
	cin >> row >> col;

}


void generate_matrix(ofstream& fout, int row, int col) {
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if (i != j) {
				fout << setw(5) << 0;
			}
			else {
				fout << setw(5) << rand() % 101;
			}
		}
		fout << '\n';
	}
}

void print_sum_of_elements(ifstream& fin) {
	int sum = 0;
	int n;
	while (!fin.eof()) {
		fin >> n;
		sum += n;
	}

	cout << "Sum of all elements: " << sum << endl;
}



 int main() {
   	srand(time(NULL));
	string filename;
	int row, col;
	get_data(filename, row, col);

	ofstream fout(filename);
	generate_matrix(fout, row, col);
	fout.close();

	ifstream fin(filename);
	print_sum_of_elements(fin);
	fin.close();

	return 0;

} 
