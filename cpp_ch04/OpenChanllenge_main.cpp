#include <iostream>
#include "header_WordGame.h"
using namespace std;

int main() {
	WordGame game;
	int n;
	cin >> n;
	Player* p = new Player[n];
	for (int i=0;i<n;i++)
		p->setPlayerName();
	while (game.game()) {
		;
	}
	cout << "게임이 종료되었습니다." << endl;
}