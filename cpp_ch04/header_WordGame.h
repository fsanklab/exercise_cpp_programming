#ifndef HEADER_WORDGAME
#define HEADER_WORDGAME

#include <iostream>
using namespace std;

// WordGame 클래스
class WordGame {
public:
	WordGame();
	bool game();
};

// Player 클래스
class Player {
	string name;
public:
	Player();
	Player(string name);
	void setPlayerName();
	void showPlayerName();
};

#endif // !HEADER_WORDGAME
