#include <iostream>
#include "header_WordGame.h"
using namespace std;

Player::Player() : Player("이름없음") {}
Player::Player(string name) {
	this->name = name;
}
void Player::setPlayerName() {
	cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
	string name;
	cin >> name;
	this->name = name;
}
void Player::showPlayerName() {
	cout << name << ">>";
}