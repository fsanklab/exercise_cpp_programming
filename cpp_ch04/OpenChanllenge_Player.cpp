#include <iostream>
#include "header_WordGame.h"
using namespace std;

Player::Player() : Player("�̸�����") {}
Player::Player(string name) {
	this->name = name;
}
void Player::setPlayerName() {
	cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
	string name;
	cin >> name;
	this->name = name;
}
void Player::showPlayerName() {
	cout << name << ">>";
}