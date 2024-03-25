#include "header_WordGame.h"

WordGame::WordGame() {
	cout << "���� �ձ� ������ �����մϴ�\n";
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	cin >> size;

	// Player�迭 ���� ����
	p = new Player[size];
	for (int i = 0; i < size; i++) {
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
		string name;
		cin >> name;
		p[i].setName(name);
	}
}
WordGame::~WordGame() {
	delete[] p;
}
void WordGame::run() {
	string a = "�ƹ���";
	string b = "";
	int turn = 0; // 0 ~ size
	cout << "�����ϴ� �ܾ�� " << a << "�Դϴ�\n";

	while (!winner) {
		cout << p[turn].getName() << ">>";
		cin >> b;
		// �����ձ� ������ ���
		if (a.at(a.length() - 2) == b.at(0) && a.at(a.length() - 1) == b.at(1)) {
			turn++;
			turn %= size;
			a = b;
		}
		// �����ձ� ������ ���
		else {
			// ���� �޽��� ���
			cout << p[turn].getName()<<"���� �����ձ⿡ �����ϼ̽��ϴ�.\n";

			// ���� ���
			turn--;
			if (turn == -1) turn = size - 1;
			cout << "�����ձ� ������ ����ڴ� " << p[turn].getName() << "�Դϴ�!\n";
			cout << "������ �����մϴ�.\n";
			return;
		}
	}
}