#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>


using namespace std;

class Item {
protected:
	string code;
	string name;
	string price;
public:
	Item() {}
	Item(string code, string name, string price) {
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

	void setPrice(string price) {
		this->price = price;
	}

	string getCode() const {
		return code;
	}

	string getName() const {
		return name;
	}

	string getPrice() const {
		return price;
	}

	virtual int readitemFromFile(ifstream &file) {
		string s1, s2, s3, s4;
		int torf = 0;
		if (getline(file, s1)) {
			s2 = s1.substr(0, 10);
			s3 = s1.substr(10, 10);
			s4 = s1.substr(20, 10);
			torf = 1;

		}
		return torf;
		

	}

	virtual void writeItemToFile(ofstream &file) {
		file << this->getCode() << setw(10) << this->getName()
			<< setw(10) << this->getPrice() << endl;
	}

	void setitem(string code, string name, string price) {
		this->code = code;
		this->name = name;
		this->price = price;
	}

	virtual void displayItem() const {
		cout << "hello";
	}


};

class FoodItem : public Item {
private:
	int dueDate;

public:
	int readitemFromFile(ifstream &file) override {
		string s1, s2, s3, s4, s5;
		int torf = 0;
		if (getline(file, s1)) {
			s2 = s1.substr(0, 10);
			s3 = s1.substr(10, 10);
			s4 = s1.substr(20, 10);
			s5 = s1.substr(30);
			this->code = s2;
			this->name = s3;
			this->price = s4;
			this->dueDate = stoi(s5);

			torf = 1;

		}
		return torf;

	}

	void displayItem() const {
		cout << this->code << setw(10) << this->name << setw(10) << this->price << setw(10) << this->dueDate << endl;
	};

};

class OfficeItem : public Item {
private:
	string company;

public:
	int readitemFromFile(ifstream &file) override {
		string s1, s2, s3, s4, s5;
		int torf = 0;
		if (getline(file, s1)) {
			s2 = s1.substr(0, 10);
			s3 = s1.substr(10, 10);
			s4 = s1.substr(20, 10);
			s5 = s1.substr(30);
			this->code = s2;
			this->name = s3;
			this->price = s4;
			this->company = s5;

			torf = 1;

		}
		return torf;

	}

	void displayItem() const {
		cout << this->code << setw(10) << this->name << setw(10) << this->price << setw(10) << this->company << endl;
	};

};

int main() {

	vector<Item*> vItem;
	Item* pItem = new FoodItem;

	ifstream fin;
	fin.open("foodItem.txt");

	while (pItem->readitemFromFile(fin)) {
		vItem.push_back(pItem);
	}

	fin.close();

	pItem = new OfficeItem;
	ifstream fin2;
	fin2.open("officeItem.txt");

	while (pItem->readitemFromFile(fin2)) {
		vItem.push_back(pItem);
	}

	fin2.close();

	for (auto elem : vItem) {
		elem->displayItem();
	}

	return 0;
}
