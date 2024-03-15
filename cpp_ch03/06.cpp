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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 10 까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}