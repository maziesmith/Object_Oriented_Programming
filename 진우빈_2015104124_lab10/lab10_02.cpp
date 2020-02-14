#include <iostream>
#include <vector>
#include <iomanip>
#include <time.h`>
using namespace std;

int main() {
	srand(time(NULL));
	int max = 0;
	int min = 200;

	vector<int> a(10);
	vector<int> b(10);


	for (auto iter = begin(a); iter != end(a); iter++)
		*(iter) = rand() % 11;

	for (auto iter = begin(b); iter != end(b); iter++)
		*(iter) = rand() % 21;
	
	cout << "<vector 1>" << endl;
	for (auto iter =begin(a); iter!=end(a); iter++)
		cout << *(iter) << " ";
	cout << endl;
	for (auto elem : b)
		cout << elem << " ";
	cout << endl;

	for (auto elem : a)
		for (auto elem2 : b) {
			if ((elem)*(elem2) > max) {
				max = elem * elem2;
			}

			else if ((elem)*(elem2) < min) {
				min = elem * elem2;
			}
		}

	cout << "ÃÖ´ñ°ª = " << max << endl;
	cout << "ÃÖ¼Ú°ª = " << min << endl;

}