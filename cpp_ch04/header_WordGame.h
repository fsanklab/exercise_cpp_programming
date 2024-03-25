#ifndef HEADER_WORDGAME
#define HEADER_WORDGAME

#include <iostream>
using namespace std;

class Player {
	string name;
public:
	Player() {};
	void setName(string name) { this->name = name; }
	string getName() { return this->name; }
};

class WordGame {
	Player* p;
	int size;
	int winner = 0; // ���ڰ� ����(1), ���ڰ� ����(0)
public:
	WordGame();
	~WordGame();
	void run();
};

#endif