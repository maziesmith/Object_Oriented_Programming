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
				cout << "이미 존재하는 ID입니다." << "\n" << "종료합니다." << endl;
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
		if (searchId == "종료") {
			cout << "종료하겠습니다." << endl;
			break;
		}
		cout << "pw : ";
		cin >> searchPassword;
		if ((searchId != user[0].getId()) && (searchId != user[1].getId()) &&
			(searchId != user[2].getId())) {
			cout << "잘못된 ID 거나 PASSWORD 입니다." << endl;
		}
		else if (searchId == user[0].getId()) {
			if (searchPassword != user[0].getPw()) {
				cout << "잘못된 ID 거나 PASSWORD 입니다." << endl;
			}
			else {
				cout << "로그인 되셨습니다." << endl;
			}
		}
		else if (searchId == user[1].getId()) {
			if (searchPassword != user[1].getPw()) {
				cout << "잘못된 ID 거나 PASSWORD 입니다." << endl;
			}
			else {
				cout << "로그인 되셨습니다." << endl;
			}
		}
		else if (searchId == user[2].getId()) {
			if (searchPassword != user[2].getPw()) {
				cout << "잘못된 ID 거나 PASSWORD 입니다." << endl;
			}
			else {
				cout << "로그인 되셨습니다." << endl;
			}
		}


	}

}

