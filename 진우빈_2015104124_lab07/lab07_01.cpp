#include <iostream>
#include <string>
using namespace std;

class User {
	string id;
	string pw;

public:
	User(){}

	User(string id, string pw) {
		this->id = id;
		this->pw = pw;
	}

	void setId() {
		cout << "id : ";
		cin >> id;
	}

	void setPw() {
		cout << "password : ";
		cin >> pw;
	}

	string getId() {
		return id;
	}

	string getPw() {
		return pw;
	}

};

int main() {
	User user[3];
	string id, password, searchId, searchPassword;

	for (int i = 0; i < 3; i++) {
		cout << "============ " << i + 1 << " ============" << endl;
		user[i].setId();
		if (i >= 1) {
			if (user[i].getId() == user[i - 1].getId()) {
				cout << "�̹� �����ϴ� ID�Դϴ�." << "\n" << "�����մϴ�." << endl;
				break;
			}
		}
		user[i].setPw();
		cout << "===========================" << endl;
		cout << endl;

	}


	while (1) {
		cout << "============ " << "logIn" << " ============" << endl << endl;
		cout << "id : ";
		cin >> searchId;
		if (searchId == "����") {
			cout << "�����ϰڽ��ϴ�." << endl;
			break;
		}
		cout << "pw : ";
		cin >> searchPassword;
		if ((searchId != user[0].getId()) && (searchId != user[1].getId()) &&
			(searchId != user[2].getId())) {
			cout << "�߸��� ID �ų� PASSWORD �Դϴ�." << endl;
		}
		else if (searchId == user[0].getId()) {
			if (searchPassword != user[0].getPw()) {
				cout << "�߸��� ID �ų� PASSWORD �Դϴ�." << endl;
			}
			else {
				cout << "�α��� �Ǽ̽��ϴ�." << endl;
			}
		}
		else if (searchId == user[1].getId()) {
			if (searchPassword != user[1].getPw()) {
				cout << "�߸��� ID �ų� PASSWORD �Դϴ�." << endl;
			}
			else {
				cout << "�α��� �Ǽ̽��ϴ�." << endl;
			}
		}
		else if (searchId == user[2].getId()) {
			if (searchPassword != user[2].getPw()) {
				cout << "�߸��� ID �ų� PASSWORD �Դϴ�." << endl;
			}
			else {
				cout << "�α��� �Ǽ̽��ϴ�." << endl;
			}
		}


	}

}

