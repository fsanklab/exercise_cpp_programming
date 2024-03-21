#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Player {
	string name;
	int num[3];
public:
	Player();
	void setName(string name) { this->name = name; }
	string getName() { return this->name; }
	int rand_number();
};
Player::Player() {
	name = "";
	num[0] = num[1] = num[2] = 0;
}
int Player::rand_number() {
	// 랜덤넘버 생성, 출력
	cout << "\t\t";
	for (int i = 0; i < 3; i++) {
		num[i] = rand() % 3;
		cout << num[i] << '\t';
	}
	// 승자가 있다면
	if (num[0] == num[1] && num[1] == num[2]) {
		cout << this->name << "님 승리!!\n";
		return 1;
	}
	// 승자가 없다면
	else {
		cout << "아쉽군요!\n";
		return 0;
	}
}

class GamblingGame {
	Player* p;
public:
	GamblingGame();
	~GamblingGame();
	void run();
};
GamblingGame::GamblingGame() {
	p = new Player[2];
	string name;
	cout << "***** 겜블링 게임을 시작합니다. *****\n";
	cout << "첫번째 선수 이름>>";
	cin >> name;
	p[0].setName(name);
	cout << "두번째 선수 이름>>";
	cin >> name;
	p[1].setName(name);
	cin.get();
}
GamblingGame::~GamblingGame() {
	delete[] p;
}
void GamblingGame::run() {
	//int winner = 0; // 게임끝낼 flag로 사용
	int player = 0; // 0(player 1), 1(player 2)
	char enter;

	while (1) {
		cout << p[player].getName() << ":<Enter>";
		enter = cin.get();
		// 엔터키 치면 랜덤번호 3개 생성+승자 판단
		if (enter == '\n') {
			// 승자가 나왔다면 게임종료
			if (p[player].rand_number() == 1) {
				break;
			}
			// 승자가 없다면 계속
			else {
				player += 1; player %= 2;  // player 0 1 토글
				continue;
			}
		}
	}
	return;
}

int main() {
	srand((unsigned)time(NULL));
	GamblingGame g;

	g.run();
}