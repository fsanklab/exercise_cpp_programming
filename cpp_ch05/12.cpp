#include <iostream>	
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) { // 생성자
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept); // 복사 생성자
	int getSize() { return this->size; }
	void read(); // size만큼 키보드에서 점수를 읽어 scroes배열에 저장
	bool isOver60(int index); // index의 학생 성적이 60보다 크면 true리턴
};
Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	this->scores = new int[this->size];
	scores = dept.scores;
}
void Dept::read() {
	cout << size << "개 점수 입력>> ";
	for (int i = 0; i < size; i++) 
		cin >> scores[i];
}
bool Dept::isOver60(int index) {
	if (scores[index] > 60)
		return true;
	return false;
}
int countPass(Dept dept) { // dept 학과에 60점 이상으로 통과하는 학생의 수 리턴
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
	cout << "60점 이상은 " << n << "명";
}