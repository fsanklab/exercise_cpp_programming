#include <iostream>
using namespace std;

class MyIntStack {
	int* p;		// 스택 메모리로 사용할 포인터
	int size;	// 스택 최대 크기
	int tos;	// 스택의 탑을 가르키는 인덱스
public:
	MyIntStack() : MyIntStack(1) {};
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};
MyIntStack::MyIntStack(int size) {
	this->size = size;
	p = new int[size];
	tos = -1;
}
MyIntStack::MyIntStack(const MyIntStack& s) {
	this->size = s.size;
	this->tos = s.tos;
	this->p = new int[size];
	for (int i = 0; i < size; i++) 
		p[i] = s.p[i]; // s의 스택값을 현재객체의 스택에 복사
}
MyIntStack::~MyIntStack() {
	delete[] p;
}
bool MyIntStack::push(int n) {
	// 1. stack 초과라면, false리턴
	if (tos + 1 == size)
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
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a; // 복사 생성
	b.push(30);

	int n;
	a.pop(n); // 스택 a 팝
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n); // 스택 b 팝
	cout << "스택 b에서 팝한 값 " << n << endl;
}