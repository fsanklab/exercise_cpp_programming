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
		cout << "µÎ Á¤¼ö¿Í ¿¬»êÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä>>";
		cin >> A >> B >> op;

		// µ¡¼À (Add Å¬·¡½º)
		if (op == "+") {
			a.setValue(A, B);
			cout << a.caculate() << endl;
		}
		// »¬¼À (Sub Å¬·¡½º)
		else if (op == "-") {
			s.setValue(A, B);
			cout << s.caculate() << endl;
		}
		// °ö¼À (Mul Å¬·¡½º)
		else if (op == "*") {
			m.setValue(A, B);
			cout << m.caculate() << endl;
		}
		// ³ª´°¼À (Div Å¬·¡½º)
		else {
			d.setValue(A, B);
			cout << d.caculate() << endl;
		}
	}
}