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
	// �����ѹ� ����, ���
	cout << "\t\t";
	for (int i = 0; i < 3; i++) {
		num[i] = rand() % 3;
		cout << num[i] << '\t';
	}
	// ���ڰ� �ִٸ�
	if (num[0] == num[1] && num[1] == num[2]) {
		cout << this->name << "�� �¸�!!\n";
		return 1;
	}
	// ���ڰ� ���ٸ�
	else {
		cout << "�ƽ�����!\n";
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
	cout << "***** �׺� ������ �����մϴ�. *****\n";
	cout << "ù��° ���� �̸�>>";
	cin >> name;
	p[0].setName(name);
	cout << "�ι�° ���� �̸�>>";
	cin >> name;
	p[1].setName(name);
	cin.get();
}
GamblingGame::~GamblingGame() {
	delete[] p;
}
void GamblingGame::run() {
	//int winner = 0; // ���ӳ��� flag�� ���
	int player = 0; // 0(player 1), 1(player 2)
	char enter;

	while (1) {
		cout << p[player].getName() << ":<Enter>";
		enter = cin.get();
		// ����Ű ġ�� ������ȣ 3�� ����+���� �Ǵ�
		if (enter == '\n') {
			// ���ڰ� ���Դٸ� ��������
			if (p[player].rand_number() == 1) {
				break;
			}
			// ���ڰ� ���ٸ� ���
			else {
				player += 1; player %= 2;  // player 0 1 ���
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