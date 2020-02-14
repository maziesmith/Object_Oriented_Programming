#include <iostream>
using namespace std;

class Train {
public:
	Train() {

	}

	Train(int people) {
		mPeople = people;
	}

	~Train() {}

	virtual int station(int takeOff, int takeOn) {
		mPeople = mPeople - takeOff + takeOn;
		return mPeople;
	}

protected:
	int mPeople;
};

class Ktx : public Train {
public:
	Ktx() {
		mPeople = 0;
	}

	Ktx(int people) {
		mPeople = people;
	}

	~Ktx() {}

	int station(int takeOff, int takeOn) override {
		mPeople = mPeople - takeOff + takeOn;
		return mPeople;
	}

	int getPeople() {
		return mPeople;
	}


};

int main()
{
	Ktx k;

	int takeoff, takeon;
	int max = 0;
	bool flag = true;
	int i = 0;

	while ( i < 5 && flag == true ) {
		cout << i + 1 << "번역 : ";
		cin >> takeoff >> takeon;
		k.station(takeoff, takeon);
		i++;

		if (k.getPeople() < 0) {
			cout << "정원미달입니다." << endl;
			flag = false;
		}

		else if (k.getPeople() > 300) {
			cout << "정원초과입니다." << endl;
			flag = false;
		}

		if (max < k.getPeople()) {
			max = k.getPeople();
		}

	
	}

	if (flag) {
		cout << "가장 많은 사람이 탑승 했을 때의 사람 수 = " << max;
	}

	return 0;
}
