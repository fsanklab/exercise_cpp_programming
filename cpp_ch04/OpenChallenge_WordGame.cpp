#include "header_WordGame.h"

WordGame::WordGame() {
	cout << "끝말 잇기 게임을 시작합니다\n";
	cout << "게임에 참가하는 인원은 몇명입니까?";
	cin >> size;

	// Player배열 동적 생성
	p = new Player[size];
	for (int i = 0; i < size; i++) {
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		string name;
		cin >> name;
		p[i].setName(name);
	}
}
WordGame::~WordGame() {
	delete[] p;
}
void WordGame::run() {
	string a = "아버지";
	string b = "";
	int turn = 0; // 0 ~ size
	cout << "시작하는 단어는 " << a << "입니다\n";

	while (!winner) {
		cout << p[turn].getName() << ">>";
		cin >> b;
		// 끝말잇기 성공한 경우
		if (a.at(a.length() - 2) == b.at(0) && a.at(a.length() - 1) == b.at(1)) {
			turn++;
			turn %= size;
			a = b;
		}
		// 끝말잇기 실패한 경우
		else {
			// 실패 메시지 출력
			cout << p[turn].getName()<<"님은 끝말잇기에 실패하셨습니다.\n";

			// 승자 출력
			turn--;
			if (turn == -1) turn = size - 1;
			cout << "끝말잇기 게임의 우승자는 " << p[turn].getName() << "입니다!\n";
			cout << "게임을 종료합니다.\n";
			return;
		}
	}
}