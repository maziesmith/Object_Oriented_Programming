#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Avengers {

protected:
	string name;
	int attack_point;
	int defense_point;
	int health;


public:
	Avengers() {
		name = " ";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}

	Avengers(string name, int attack_point, int defense_point, int health) {
		this->name = name;
		this->attack_point = attack_point;
		this->defense_point = defense_point;
		this->health = health;
	}

	~Avengers() {}

	virtual void set(string _name, int _attack, int _defense, int _health) {
		name = _name;
		attack_point = _attack;
		defense_point = _defense;
		health = _health;
	}

	virtual int attack() {
		return attack_point;
	}

	virtual void defense(int _attack_point) {
		health = health - (_attack_point - defense_point);
	}


	virtual void print_info() {
		cout << "Name : " << name << endl;
		cout << "Attack_Point : " << attack_point << endl;
		cout << "Defense_Point : " << defense_point << endl;
		cout << "Health : " << health << endl;
	}

};

class Character : public Avengers {
public:
	int get_health() {
		return health;
	}
};

int main() {
	srand(time(NULL));
	Character my_char;
	Character enemy_char;
	Character avengers[3];
	avengers[0].set("IronMan", 70, 40, 100);
	avengers[1].set("Captain America", 60, 50, 100);
	avengers[2].set("Thor", 80, 30, 100);
	string character;
	int enemy = rand() % 3;
	cout << "Choose your character(IronMan, Captain America, Thor) : ";
	cin >> character;

	if (character == "IronMan") {
		my_char = avengers[0];
	}

	else if (character == "Captain America") {
		my_char = avengers[1];
	}

	else if (character == "Thor") {
		my_char = avengers[2];
	}

	cout << "--My Character--" << endl;
	my_char.print_info();

	cout << endl;

	
	cout << "--Enemy character--" << endl;
	switch (enemy) {
		case 0:
			enemy_char = avengers[0];
			break;
		case 1:
			enemy_char = avengers[1];
			break;
		case 2:
			enemy_char = avengers[2];
			break;
	}
	enemy_char.print_info();
	cout << endl;

	cout << endl << "--Battle--" << endl;

	cout << "My Life: " << my_char.get_health() << "\t"
		<< "Enemy Life:" << enemy_char.get_health() << endl;
	my_char.attack();

	while (1) {

		my_char.attack();
		enemy_char.defense(my_char.attack());


		cout << "My Life: " << my_char.get_health() << "\t"
			<< "Enemy Life:" << enemy_char.get_health() << endl;

		if (enemy_char.get_health() <= 0) {
			cout << "You win!" << endl;
			break;
		}

		enemy_char.attack();
		my_char.defense(enemy_char.attack());


		cout << "My Life: " << my_char.get_health() << "\t"
			<< "Enemy Life:" << enemy_char.get_health() << endl;

		if (my_char.get_health() <= 0) {
			cout << "You Lose!" << endl;
			break;
		}

		
	}
	return 0;

}
