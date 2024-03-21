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
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}
CircleManager::~CircleManager() {
	delete[] p;
}
void CircleManager::searchByName() {
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	string name;
	cin >> name;
	cout << name << "�� ������ ";
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name)
			cout << p[i].getArea();
	}
	cout << endl;
}
void CircleManager::searchByArea() {
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	int size;
	cin >> size;
	cout << size << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < this->size; i++) {
		if (p[i].getArea() > size)
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
	}
	cout << endl;
}

int main() {
	cout << "���� ���� >> ";
	int n;
	cin >> n;
	CircleManager cm(n);

	cm.searchByName();
	cm.searchByArea();	
}