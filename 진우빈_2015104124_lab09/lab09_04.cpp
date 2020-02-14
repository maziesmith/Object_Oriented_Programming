#include <iostream>
using namespace std;

class Stack {
private:
	int* p_list;
	int size;
	int MAX_SIZE;


public:
	Stack(int _MAX_SIZE = 1000) {
		MAX_SIZE = _MAX_SIZE;
		p_list = new int[MAX_SIZE];
		size = 0;
	}

	~Stack() {}

	int find_index(int _item) {
		int ret = -1;
		for (int i = 0; i < MAX_SIZE; i++) {
			if (p_list[i] == _item) {
				ret = i;
			}
		}
		return ret;
	}

	void push(int _item) {
		if (size >= MAX_SIZE)
			cout << "Error: out of Memory" << endl;

		if (find_index(_item) == -1) { // ¾ø´Â°Å
			p_list[size] = _item;
			size++;
		}
		else return;
		
	}

	int pop() {
		int last;
		if (size != 0) {
			last = p_list[size - 1];
			size--;
		}
		else {
			cout << "Error: No item exists in the list" << endl;
			last = 0;
		}
		return last;
	
			


	}

	int get_size() const {
		return size;
	}

	int get_item(int _index) const {
		return p_list[_index];
	}

	void print() const {
		cout << "Items in the list : ";
		for (int i = 0; i < size; i++) {
			cout << p_list[i] << ", ";
		}
		cout << endl;
	}

	void operator+=(const Stack stack) {

		for (int i = 0; i < stack.get_size(); i++) {
			this->push(stack.get_item(i));
		}
	}

	bool operator==(const Stack stack) {
		bool flag = false;
		int sum = 0;
		if (this->get_size() == stack.get_size()) {
			for (int i = 0; i < stack.get_size(); i++) {
				if (this->get_item(i) == stack.get_item(i)) {
					sum++;
				}
			}
		}
		if (sum == stack.get_size()) {
			flag = true;
		}
		
		return flag;
	}

	


};

int main() {
	Stack s1, s2;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s2.push(1);
	s2.push(2);
	s2.push(5);

	s1.print();
	s2.print();

	s1 += s2 ;
	s1.print();
	s2.print();
	cout << "s1 == s2 ? " << (s1 == s2) << endl;

	s1.pop();
	s1.pop();
	s2.pop();
	cout << "s1 == s2 ? " << (s1 == s2) << endl;

	s2.pop();
	s2.pop();
	s2.pop();

	return 0;
	

}