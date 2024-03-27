#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value);		// �Ű����� value�� ���value�� �ʱ�ȭ��
	Accumulator& add(int n);	// value�� n�� ���� ���� ������
	int get();					// ������ �� value�� ��ȯ��
};
Accumulator::Accumulator(int value) {
	this->value = value;
}
Accumulator& Accumulator::add(int n) {
	this->value += n;
	return *this;	// this�� �������̹Ƿ�, *this���.
}
int Accumulator::get() {
	return this->value;
}

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // value�� 28�� ��
	cout << acc.get() << endl;
}