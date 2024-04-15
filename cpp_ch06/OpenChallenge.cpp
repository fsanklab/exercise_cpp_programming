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
	cout << "Up & Down 게임을 시작합니다.\n";
	Person players[2] = { Person("김인수", 0), Person("오은경", 1) };
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	int bottom = 0, top = 99;
	int id_toggle = 0;
	int n;

	while (1) {
		cout << "답은 " << bottom << "과 " << top << "사이에 있습니다.\n";
		cout << players[id_toggle].getName() << ">>";
		cin >> n;
		// 1. 정답이라면
		if (answer == n) {
			cout << players[id_toggle].getName() << "가 이겼습니다!!\n";
			break;
		}
		// 2. 정답 < n
		else if (answer < n) {
			top = n;
		}
		// 3. 정답 > n
		else
			bottom = n;

		id_toggle++; id_toggle %= 2;
	}
}

int main() {
	UpAndDownGame::run();
}