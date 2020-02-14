#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Account {

	string id;
	string name;
	int balance;
	static int sum;


public:
	Account();
	Account(string id, string name, int balance);
	string get_name() const;
	string get_id() const;
	int get_balance() const;
	void set_id();
	void set_name();
	void set_balance();
	static int getsum();
	~Account();
	Account operator+(const int& account);
	Account operator-(const int& account);
	Account& operator=(const Account& account);
};

int Account::sum = 0;

Account::Account() 
{
	id = " ";
	name = " ";
	balance = 0;
}

Account::Account(string id, string name, int balance)
{
	this->id = id;
	this->name = name;
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

void Account::set_id()
{
	cout << "�й� : ";
	cin >> id;
	cout << endl;
}

void Account::set_name()
{
	cout << "�̸� : ";
	cin >> name;
	cout << endl;
}

void Account::set_balance()
{
	cout << "�ܾ� : ";
	cin >> balance;
	cout << endl;
	sum += balance;
}


Account::~Account() 
{
}

int Account::getsum()
{
	return sum;
}



Account Account::operator+(const int& account)
{
	Account result(this->id, this->name, this->balance + account);
	return result;
	
}

Account Account::operator-(const int& account)
{
	Account result(this->id, this->name, this->balance - account);
	return result;

}

Account& Account::operator=(const Account& account)
{
	this->id = account.get_id();
	this->name = account.get_name();
	this->balance = account.get_balance();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Account& account)
{
	return os << "�й�: " << account.get_id() << "  �̸�: " << account.get_name()
		<< "  �ܾ�: " << account.get_balance();
}




int main()
{
	Account* accounts;
	int number;
	cout << "�� �л� �� �Է�: ";
	cin >> number;

	accounts = new Account[number];

	for (int i = 0; i < number; i++) {
		cout << i + 1 << "��° �л� ���� �Է� : " << endl;
		accounts[i].set_id();

		if (i >= 1 && accounts[i].get_id() == accounts[i - 1].get_id()) {
			cout << "�ߺ��� �й��Դϴ�. ���α׷��� �����մϴ�." << endl;
			break;
			return 0;
		}

		else {

			accounts[i].set_name();
			accounts[i].set_balance();
			cout << "====================" << endl;
			cout << endl;
		}


	}

	delete[] accounts;

	cout << "ȸ���� �ݾ� : " << Account::getsum() << endl;



}