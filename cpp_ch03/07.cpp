#include <iostream>
using namespace std;

class SelecttableRandom {
public:
	SelecttableRandom() {};
	int next(int flag);
	int nextInRange(int flag, int start, int end);
};

int SelecttableRandom::next(int flag) {
	int n = rand();
	// ¦�����
	if (flag == 0 && n % 2 != 0) {
		n++;
		return n;
	}
	// Ȧ����� 
	if (flag == 1 && n % 2 == 0) {
		n++;
		return n;
	}
	return n;
}
int SelecttableRandom::nextInRange(int flag, int start, int end) {
	int n = rand() % 8 + 2;
	// ¦�����
	if (flag == 0 && n % 2 != 0) {
		n++;
		return n;
	}
	// Ȧ����� 
	if (flag == 1 && n % 2 == 0) {
		n++;
		return n;
	}
	return n;
}

int main() {
	srand((unsigned)time(NULL));
	SelecttableRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(0);
		cout << n << ' ';
 	}
	cout << endl << endl << "-- 2���� 9 ������ ���� Ȧ�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(1, 2, 4);
		cout << n << ' ';
	}
	cout << endl;
}