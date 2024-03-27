#include <iostream>
using namespace std;

class MyIntStack {
	int p[10];
	int tos;
public:
	MyIntStack() { for (int i = 0; i < 10; i++) p[i] = 0; tos = -1; };
	bool push(int n);
	bool pop(int& n);
};
bool MyIntStack::push(int n) {
	// 1. stack �ʰ����, false����
	if (tos + 1 == 10)
		return false;
	// 2. stack �ʰ��� �ƴ϶��, ���� �� true����
	p[++tos] = n;
	return true;
}
bool MyIntStack::pop(int& n) {
	// 1. stack�� ����ִٸ�, false����
	if (tos == -1)
		return false;
	// 2.stack�� ������� �ʴٸ�, ��� pop�ϰ� true����
	n = p[tos--];
	return true;
}

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) {	// 11�� Ǫ���ϸ�, ���������� stack full�� �ȴ�.
		if (a.push(i))cout << i << ' ';		// Ǫ�õ� �� ����
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {		// 11���� ���ϸ�, ���������� stack empty�� �ȴ�.
		if (a.pop(n)) cout << n << ' ';		// �� �� �� ���
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}