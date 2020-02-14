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
					cout << "\n\t �ߺ��� �����Ͱ� ����" << endl;
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
	cout << "\t1. ����Ʈ �߰�" << endl;
	cout << "\t2. ����Ʈ ����" << endl;
	cout << "\t3. ����Ʈ ���" << endl;
	cout << "\t4. ���α׷� ����" << endl;
	cout << "\n\t �Է� --> ";
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
			cout << "\n �߰��� ������ : ";
			cin >> input;
			list.Add(input);
			break;
		case 2:
			cout << "\n ������ ������ : ";
			cin >> input;
			list.Delete(input);
			break;
		case 3:
			list.Print();
			break;
		case 4:
			cout << "\n\t ���α׷��� �����մϴ�." << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;

}