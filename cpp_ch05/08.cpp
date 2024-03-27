#include <iostream>
using namespace std;

class MyIntStack {
	int* p;		// ���� �޸𸮷� ����� ������
	int size;	// ���� �ִ� ũ��
	int tos;	// ������ ž�� ����Ű�� �ε���
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
		p[i] = s.p[i]; // s�� ���ð��� ���簴ü�� ���ÿ� ����
}
MyIntStack::~MyIntStack() {
	delete[] p;
}
bool MyIntStack::push(int n) {
	// 1. stack �ʰ����, false����
	if (tos + 1 == size)
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
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a; // ���� ����
	b.push(30);

	int n;
	a.pop(n); // ���� a ��
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n); // ���� b ��
	cout << "���� b���� ���� �� " << n << endl;
}