#include <iostream>
#include "header_10.h"
using namespace std;

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int A, B;
	string op;

	while (1) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> A >> B >> op;

		// ���� (Add Ŭ����)
		if (op == "+") {
			a.setValue(A, B);
			cout << a.caculate() << endl;
		}
		// ���� (Sub Ŭ����)
		else if (op == "-") {
			s.setValue(A, B);
			cout << s.caculate() << endl;
		}
		// ���� (Mul Ŭ����)
		else if (op == "*") {
			m.setValue(A, B);
			cout << m.caculate() << endl;
		}
		// ������ (Div Ŭ����)
		else {
			d.setValue(A, B);
			cout << d.caculate() << endl;
		}
	}
}