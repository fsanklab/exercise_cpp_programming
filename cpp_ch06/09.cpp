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
	cout << "************* �Խ����Դϴ�. *************" << endl;
	for (int i = 0; i < index; i++)
		cout << i << ": " << messages[i] << endl;
	cout << endl;
}


int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿����ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();	
}