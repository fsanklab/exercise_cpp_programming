#include <iostream>
#include "header_WordGame.h"
using namespace std;

WordGame::WordGame() {
	cout << "끝말 잇기 게임을 시작합니다" << endl;
	cout << "게임에 참가하는 인원은 몇명입니까?";
}
bool WordGame::game() {
	string a = "아버지";
	cout << "시작하는 단어는 " << a << "입니다." << endl;

}