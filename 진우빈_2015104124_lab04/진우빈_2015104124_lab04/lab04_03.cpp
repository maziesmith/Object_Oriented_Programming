#include <iostream>
#include <time.h>
#include <iomanip>
#include <fstream>
#include<string>
using namespace std;

int main()
{
	srand(time(NULL));

	ofstream myfile;
	myfile.open("temp.txt");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			myfile<< setw(4) << rand() % 99 + 1 << " ";
		}
		myfile << "\n";
	}
	myfile.close();
	return 0;
}