#include <iostream>
#include <string>
using namespace std;

class Account {
	string name;
	string id;
	int balance;

public:
	Account();
	Account(string name, string id, int balance);
	string get_name() const;
	string get_id() const;
	int get_balance() const;
	Account operator+(const int& account);
	Account operator-(const int& account);
	Account& operator=(const Account& account);
};

Account::Account() 
{
	name = " ";
	id = " ";
	balance = 0;
}

Account::Account(string name, string id, int balance)
{
	this->name = name;
	this->id = id;
	this->balance = balance;
}

string Account::get_name() const
{
	return name;
}

string Account::get_id() const
{
	return id;
}

int Account::get_balance() const
{
	return balance;
}

Account Account::operator+(const int& account)
{
	Account result(this->name, this->id, this->balance + account);
	return result;
	
}

Account Account::operator-(const int& account)
{
	Account result(this->name, this->id, this->balance - account);
	return result;

}

Account& Account::operator=(const Account& account)
{
	this->name = account.get_name();
	this->id = account.get_id();
	this->balance = account.get_balance();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Account& account)
{
	return os << "�й�: " << account.get_id() << "  �̸�: " << account.get_name()
		<< "  �ܾ�: " << account.get_balance();
}





int main() {
	Account acnt[3] = {
		Account("������","2015",10000),
		Account("������","2012",0),
		Account("�̰�ȣ", "2011",5000)
	};

	string send_id, get_id;


	while (1) {
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> send_id;
		if (send_id == "����") {
			cout << "�����մϴ�." << endl;
			cout << acnt[0] << endl;
			cout << acnt[1] << endl;
			cout << acnt[2] << endl;
			break;
		}
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> get_id;


		if (send_id != "2015" && send_id != "2012" && send_id != "2011") {
			cout << "������ �л� Ȥ�� ���� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
		}
		else if (get_id != "2015" && get_id != "2012" && get_id != "2011") {
			cout << "������ �л� Ȥ�� ���� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
		}

		else if (send_id == get_id) {
			cout << "�й��� �ߺ��˴ϴ�. �ٽ� �Է����ּ���." << endl;
		}

		else if (send_id == "2015") {
			int money = acnt[0].get_balance();
			if (money==0) {
				cout << "������ �л��� �ܾ��� �����մϴ�." << endl;
			}
			else if (get_id == "2012") {
				acnt[0] = acnt[0] - money;
				acnt[1] = acnt[1] + money;
				cout << "���� �л��� �ܾ� : " << acnt[0] << endl;
				cout << "���� �л��� �ܾ� : " << acnt[1] << endl;
			}

			else if (get_id == "2011") {
				acnt[0] = acnt[0] - money;
				acnt[2] = acnt[2] + money;
				cout << "���� �л��� �ܾ� : " << acnt[0] << endl;
				cout << "���� �л��� �ܾ� : " << acnt[2] << endl;
				
			}

			}

		else if (send_id == "2012") {
			int money = acnt[1].get_balance();

			if (money == 0) {
				cout << "������ �л��� �ܾ��� �����մϴ�." << endl;
			}
			else if (get_id == "2015") {
				acnt[1] = acnt[1] - money;
				acnt[0] = acnt[0] + money;
				cout << "���� �л��� �ܾ� : " << acnt[1] << endl;
				cout << "���� �л��� �ܾ� : " << acnt[0] << endl;
			}

			else if (get_id == "2011") {
				acnt[1] = acnt[1] - money;
				acnt[2] = acnt[2] + money;
				cout << "���� �л��� �ܾ� : " << acnt[1] << endl;
				cout << "���� �л��� �ܾ� : " << acnt[2] << endl;

			}

		}

		else {
			int money = acnt[2].get_balance();

			if (money == 0) {
				cout << "������ �л��� �ܾ��� �����մϴ�." << endl;
			}
			else if (get_id == "2015") {
				acnt[2] = acnt[2] - money;
				acnt[0] = acnt[0] + money;
				cout << "���� �л��� �ܾ� : " << acnt[2] << endl;
				cout << "���� �л��� �ܾ� : " << acnt[0] << endl;
			}

			else if (get_id == "2012") {
				acnt[2] = acnt[2] - money;
				acnt[1] = acnt[1] + money;
				cout << "���� �л��� �ܾ� : " << acnt[2] << endl;
				cout << "���� �л��� �ܾ� : " << acnt[1] << endl;

			}

		}



		}
	}
