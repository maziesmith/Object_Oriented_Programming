#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	string s1;
	ifstream myfile1;
	ofstream myfile2;
	myfile1.open("test3.txt");
	myfile2.open("result2.txt");
	int leng;
	cout << "length : ";
	cin >> leng;

	while (getline(myfile1, s1)) {
		myfile2 << s1;
	}
	myfile1.close();
	myfile2.close();

	string s2;
	ifstream myfile3;
	myfile3.open("result2.txt");
	
	getline(myfile3, s2);
	myfile3.close();

	ofstream myfile4;
	myfile4.open("result3.txt");

	for (int i = 0; i < s2.length()/leng+1; i++) {
		myfile4 << s2.substr(leng*i, leng) << endl;
	}

	

	return 0;





}