#include <iostream>
using namespace std;

class Random {
public:
	Random() {};
	int next();
	int nextInRange(int start, int end);
};

int Random::next() {
	return rand();
}
int Random::nextInRange(int start, int end) {
	return (rand() % 3) + 2;
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� 4 ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}