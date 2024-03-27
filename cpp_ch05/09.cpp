#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value);		// 매개변수 value로 멤버value를 초기화함
	Accumulator& add(int n);	// value에 n을 더해 값을 누적함
	int get();					// 누적된 값 value를 반환함
};
Accumulator::Accumulator(int value) {
	this->value = value;
}
Accumulator& Accumulator::add(int n) {
	this->value += n;
	return *this;	// this는 포인터이므로, *this사용.
}
int Accumulator::get() {
	return this->value;
}

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // value는 28이 됨
	cout << acc.get() << endl;
}