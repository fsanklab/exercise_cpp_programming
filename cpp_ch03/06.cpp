#include <iostream>
using namespace std;

class EvenSelecttableRandom {
public:
	EvenSelecttableRandom() {};
	int next();
	int nextInRange(int start, int end);
};

int EvenSelecttableRandom::next() {
	int n = rand();
	if (n % 2 != 0)
		n--;
	return n;
}
int EvenSelecttableRandom::nextInRange(int start, int end) {
	int n = rand() % 9 + 2;
	if (n % 2 != 0)
		n--;
	return n;
}

int main() {
	srand((unsigned)time(NULL));
	EvenSelecttableRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 10 ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}