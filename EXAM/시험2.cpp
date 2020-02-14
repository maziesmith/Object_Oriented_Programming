#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void ReadText(string& text) {
	int i = 1;
	char buff[300];

	while (1) {
		cout << "Enter line(Hit return for end) " << i << " : ";
		cin.getline(buff, 300);
		if (strlen(buff)<1) {
			break;
		}
		text = text + " " + buff;
		i++;
	}
	cout << "\n" << "%% Combined String Output %%" << endl;
	cout << text << "\n" << endl;
	

}

int CountCompleteWord(string text, string Substr) {
	int i = 0;
	int count = 0;
	string SSubstr = " " + Substr;
	int a = SSubstr.length();
	while (1) {
		if (SSubstr == text.substr(i, a)) {
			count += 1;
		}
		i++;
		if (i > text.length()) {
			break;
		}
		
	}



	return count;
}

int main()
{
	string text;
	string Substr = "test";
	ReadText(text);
	cout << "numbers of matches for [ " << Substr << " ] :" << CountCompleteWord(text, Substr);
	return 0;


}