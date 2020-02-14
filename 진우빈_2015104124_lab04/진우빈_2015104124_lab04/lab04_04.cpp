#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream myfile1;
	ifstream myfile2;
	ofstream result;
	string line1, line2;
	myfile1.open("test1.txt");
	myfile2.open("test2.txt");
	result.open("result.txt");
	while (getline(myfile1, line1)) {
		result << line1 << endl;
	}

	result << "\n";

	while (getline(myfile2, line2)) {
		result << line2 << endl;
	}
	return 0;
}