#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
class CList {
private:
	T m_Array[5];
	int m_Length;

public:
	CList() {
		m_Length = 0;
	}

	~CList() {};

	bool IsEmpty() {
		int torf = 0;
		if (m_Length == 0)
			torf = 1;
		return torf;
	}

	bool IsFull() {
		int torf = 0;
		if (m_Length == 5)
			torf = 1;
		return torf;
	}

	void Add(T data) {
		if (this->IsFull())
			cout << "\n\tList is full." << endl;

		else {
			for (int i = 0; i < m_Length; i++) {
				if (data == m_Array[i]) {
					cout << "\n\t 중복된 데이터가 존재" << endl;
					return;
				}
				
			}

			m_Array[m_Length] = data;
			m_Length++;
			sort(m_Array, m_Array + m_Length);
			
		}
		
	}

	void Delete(T data) {
		if (this->IsEmpty())
			cout << "\n\tList is empty." << endl;

		else {
			for (int i = 0; i < m_Length; i++) {
				if (m_Array[i] == data) {
					for (int j = i; j < m_Length; j++) {
						m_Array[j] = m_Array[j + 1];
					}
					m_Length--;
				}
			}
 		}
	}

	void Print() {

		cout << "\n\t Current List" << endl;
		cout << "\t";

		for (int i = 0; i < m_Length; i++) {
			cout << m_Array[i] << " ";
		}

		cout << endl;
	}


};




int command() {
	int num;
	cout << "\n\t---- menu ----" << endl;
	cout << "\t1. 리스트 추가" << endl;
	cout << "\t2. 리스트 삭제" << endl;
	cout << "\t3. 리스트 출력" << endl;
	cout << "\t4. 프로그램 종료" << endl;
	cout << "\n\t 입력 --> ";
	cin >> num;

	return num;
}

int main()
{
	CList<int> list;
	int input;
	int com;

	while (1) {
		com = command();
		switch (com) {
		case 1:
			cout << "\n 추가할 데이터 : ";
			cin >> input;
			list.Add(input);
			break;
		case 2:
			cout << "\n 삭제할 데이터 : ";
			cin >> input;
			list.Delete(input);
			break;
		case 3:
			list.Print();
			break;
		case 4:
			cout << "\n\t 프로그램을 종료합니다." << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;

}