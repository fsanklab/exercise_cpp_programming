#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() :Circle(1) {}
	Circle(int radius) { this->radius = radius; }
	int getRadius() { return this->radius; }
	void swap(Circle &circle);
};
void Circle::swap(Circle &circle) {
	cout << endl << "swap()�Լ��� �����մϴ�." << endl << endl;
	int tmp = circle.radius;
	circle.radius = this->radius;
	this->radius = tmp;
}

int main() {
	Circle donut(10), pizza(20);
	cout << "---swap�Լ� ���� ��---" << endl;
	cout << "donut�� ������ = " << donut.getRadius() << " pizza�� ������ = " << pizza.getRadius() << endl;
	donut.swap(pizza);
	cout << "---swap�Լ� ���� ��---" << endl;
	cout << "donut�� ������ = " << donut.getRadius() << " pizza�� ������ = " << pizza.getRadius() << endl;

}