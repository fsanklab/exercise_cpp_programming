#include <iostream>
using namespace std;

class Person {
	string name;
	int id;
public:
	Person(string name, int id) {
		this->name = name; 
		this->id = id;
	}
	string getName() { return this->name; }
};

class UpAndDownGame {
public:
	static void run();
};
void UpAndDownGame::run() {
	cout << "Up & Down ������ �����մϴ�.\n";
	Person players[2] = { Person("���μ�", 0), Person("������", 1) };
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	int bottom = 0, top = 99;
	int id_toggle = 0;
	int n;

	while (1) {
		cout << "���� " << bottom << "�� " << top << "���̿� �ֽ��ϴ�.\n";
		cout << players[id_toggle].getName() << ">>";
		cin >> n;
		// 1. �����̶��
		if (answer == n) {
			cout << players[id_toggle].getName() << "�� �̰���ϴ�!!\n";
			break;
		}
		// 2. ���� < n
		else if (answer < n) {
			top = n;
		}
		// 3. ���� > n
		else
			bottom = n;

		id_toggle++; id_toggle %= 2;
	}
}

int main() {
	UpAndDownGame::run();
}