#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

class Item {
private:
	string code;
	string name;
	int price;

public:
	Item() {
		code = "default";
		name = "default";
		price = 0;
	}

	Item(string code, string name, int price) {
		this->code = code;
		this->name = name;
		this->price = price;
	}

	void setCode(string code) {
		this->code = code;
	}

	void setName(string name) {
		this->name = name;
	}

	void setPrice(int price) {
		this->price = price;
	}

	string getCode() {
		return code;
	}

	string getName() {
		return name;
	}

	int getPrice() {
		return price;
	}

};

int main() {
	Item item1("C1001", "계산기", 14000);
	Item item2;
	item2.setCode("F1002");
	item2.setName("계란빵");
	item2.setPrice(1000);

	cout << item1.getCode() << setw(10) << item1.getName() << setw(10) << item1.getPrice() << endl;
	cout << item2.getCode() << setw(10) << item2.getName() << setw(10) << item2.getPrice() << endl;
}	
