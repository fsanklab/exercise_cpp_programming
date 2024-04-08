#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 0);
	~MyVector() { delete[] mem; }
	// ���� ��ü ���� ���
	void show();
};
MyVector::MyVector(int n, int val) {
	size = n;
	mem = new int[size];
	for (int i = 0; i < n; i++)
		mem[i] = val;
}
void MyVector::show() {
	for (int i = 0; i < size; i++)
		cout << mem[i] << ' ';
	cout << "-��-" << endl;
}


int main() {
	MyVector v1, v2(5), v3(10, 100);
	v1.show();
	v2.show();
	v3.show();
}