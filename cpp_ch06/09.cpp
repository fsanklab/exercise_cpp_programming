#include <iostream>
using namespace std;

class Board {
	static string messages[];
	static int index;
public:
	static void add(string str);
	static void print();
};
string Board::messages[100];
int Board::index = 0;

void Board::add(string str) {
	messages[index++] = str;
}
void Board::print() {
	cout << "************* 게시판입니다. *************" << endl;
	for (int i = 0; i < index; i++)
		cout << i << ": " << messages[i] << endl;
	cout << endl;
}


int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();	
}