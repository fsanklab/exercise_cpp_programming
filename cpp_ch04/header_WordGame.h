#ifndef HEADER_WORDGAME
#define HEADER_WORDGAME

#include <iostream>
using namespace std;

// WordGame Ŭ����
class WordGame {
public:
	WordGame();
	bool game();
};

// Player Ŭ����
class Player {
	string name;
public:
	Player();
	Player(string name);
	void setPlayerName();
	void showPlayerName();
};

#endif // !HEADER_WORDGAME
