#include <iostream>
#include "header_OpenChallenge_Exp.h"
using namespace std;

// Exp 클래스 구현부
Exp::Exp(int b) {
	base = b;
	exp = 1;
}
Exp::Exp(int b, int e) {
	base = b;
	exp = e;
}
int Exp::getValue() {
	int result = 1;
	for (int i = 0; i < exp; i++)
		result *= base;
	return result;
}
int Exp::getBase() { return base; }
int Exp::getExp() { return exp; }
bool Exp::equals(Exp b) {
	if (this->getValue() == b.getValue())
		return true;
	return false;
}

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}