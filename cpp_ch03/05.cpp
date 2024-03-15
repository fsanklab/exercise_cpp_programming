#include <iostream>
using namespace std;

class EvenSelecttableRandom {
public:
	EvenSelecttableRandom() {};
	int next();
	int nextInRange(int start, int end);
};

int EvenSelecttableRandom::next() {
	return rand();
}
int EvenSelecttableRandom::nextInRange(int start, int end) {
	return (rand() % 3) + 2;
}

int main() {
	srand((unsigned)time(NULL));
	EvenSelecttableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 4 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}