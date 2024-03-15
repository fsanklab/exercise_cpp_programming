#include <iostream>
#include <string>
using namespace std;

class Integer {
	int i;
public:
	Integer() : Integer(1) {}
	Integer(int n) { i = n; }
	Integer(string s);
	int get();
	void set(int n);
	int isEven();
};

Integer::Integer(string s) {
	i = stoi(s);
}
int Integer::get() {
	return i;
}
void Integer::set(int n) {
	i = n;
}
int Integer::isEven() {
	if (i % 2 == 0)
		return 1;
	return 0;
}

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}