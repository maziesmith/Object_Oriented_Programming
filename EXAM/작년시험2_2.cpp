#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>


using namespace std;

class Item {
private:
	string code;
	string name;
	int price;
public:
	Item() {}
	Item(string code, string name, int price) {
		this->code = code;
		this->name = name;
		this->price = price;
	}

	~Item() {}

	void setCode(string code) {
		this->code = code;
	}

	void setName(string name) {
		this->name = name;
	}

	void setPrice(int price) {
		this->price = price;
	}

	string getCode() const {
		return code;
	}

	string getName() const {
		return name;
	}

	int getPrice() const {
		return price;
	}

	int readitemFromFile(ifstream &file) {
		int torf;
		string s1, s2, s3, s4;
		if (getline(file, s1)) {
			s2 = s1.substr(0, 10);
			s3 = s1.substr(10, 10);
			s4 = s1.substr(20, 10);
			this->code = s2;
			this->name = s3;
			this->price = stoi(s4);
			torf = 1;
		}
		else
			torf = 0;

		return torf;
	}

	void writeItemToFile(ofstream &file) {
		file<< this->getCode() << setw(10) << this->getName()
			<< setw(10) << this->getPrice() << endl;
	}

	void setitem(string code, string name, int price) {
		this->code = code;
		this->name = name;
		this->price = price;
	}

	
};

int main() {
	Item temp;
	vector<Item> vItem;
	string infilename = "item.txt";
	string outfilename = "item_output.txt";

	ifstream fin;
	fin.open(infilename);
	while (temp.readitemFromFile(fin))
		vItem.push_back(temp);
		
	fin.close();

	temp.setitem("E1002", "¹ÚÄ«½º", 1000);
	vItem.push_back(temp);

	ofstream fout;
	fout.open(outfilename);
	for (auto elem : vItem)
		elem.writeItemToFile(fout);
	fout.close();

	return 0;
	
}
