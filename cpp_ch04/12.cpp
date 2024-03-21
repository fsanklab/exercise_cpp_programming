#include <iostream>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	Circle() :Circle(1) {};
	Circle(int radius);
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
Circle::Circle(int radius) { this->radius = radius; }
void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}
double Circle::getArea() { return 3.14 * radius * radius; }
string Circle::getName() { return this->name; }

class CircleManager {
	Circle* p;
	int size = 0;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};
CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	int radius;
	string name;
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}
CircleManager::~CircleManager() {
	delete[] p;
}
void CircleManager::searchByName() {
	cout << "검색하고자 하는 원의 이름 >> ";
	string name;
	cin >> name;
	cout << name << "의 면적은 ";
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name)
			cout << p[i].getArea();
	}
	cout << endl;
}
void CircleManager::searchByArea() {
	cout << "최소 면적을 정수로 입력하세요 >> ";
	int size;
	cin >> size;
	cout << size << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < this->size; i++) {
		if (p[i].getArea() > size)
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
	}
	cout << endl;
}

int main() {
	cout << "원의 개수 >> ";
	int n;
	cin >> n;
	CircleManager cm(n);

	cm.searchByName();
	cm.searchByArea();	
}