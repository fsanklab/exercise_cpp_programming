#include <iostream>	
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) { // ������
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept); // ���� ������
	int getSize() { return this->size; }
	void read(); // size��ŭ Ű���忡�� ������ �о� scroes�迭�� ����
	bool isOver60(int index); // index�� �л� ������ 60���� ũ�� true����
};
Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	this->scores = new int[this->size];
	scores = dept.scores;
}
void Dept::read() {
	cout << size << "�� ���� �Է�>> ";
	for (int i = 0; i < size; i++) 
		cin >> scores[i];
}
bool Dept::isOver60(int index) {
	if (scores[index] > 60)
		return true;
	return false;
}
int countPass(Dept dept) { // dept �а��� 60�� �̻����� ����ϴ� �л��� �� ����
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}

int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60�� �̻��� " << n << "��";
}