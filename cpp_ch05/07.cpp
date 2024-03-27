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
	// 1. stack 초과라면, false리턴
	if (tos + 1 == 10)
		return false;
	// 2. stack 초과가 아니라면, 적재 후 true리턴
	p[++tos] = n;
	return true;
}
bool MyIntStack::pop(int& n) {
	// 1. stack이 비어있다면, false리턴
	if (tos == -1)
		return false;
	// 2.stack이 비어있지 않다면, 결과 pop하고 true리턴
	n = p[tos--];
	return true;
}

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) {	// 11개 푸시하면, 마지막에는 stack full이 된다.
		if (a.push(i))cout << i << ' ';		// 푸시된 값 에코
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {		// 11개를 팝하면, 마지막에는 stack empty가 된다.
		if (a.pop(n)) cout << n << ' ';		// 팝 한 값 출력
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}