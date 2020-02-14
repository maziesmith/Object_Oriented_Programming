#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

#define buffer_size 20

int  main() {
	int size, count=0;
	int* numbers;
	char buffer[buffer_size];
	while (1) {
		cout << "please enter number of values to process : ";
		cin >> size;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		if (size > 0) {

			cout << "please enter numbers : ";
			cin.getline(buffer, buffer_size);
			for (int i = 0; i < buffer_size; i++) {
				if (count == size)
					break;
				if (buffer[i] > 0) {
					numbers = new int[buffer[i]];
					count++;
				}
			}


			if (count == size)
				cout << endl << "True" << endl;
			else
				cout << endl << "False" << endl;


		}
		else
			exit(-1);
	}
	
	
	
	return 0;
}
