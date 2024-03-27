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
	cout << endl << "swap()함수를 실행합니다." << endl << endl;
	int tmp = circle.radius;
	circle.radius = this->radius;
	this->radius = tmp;
}

int main() {
	Circle donut(10), pizza(20);
	cout << "---swap함수 실행 전---" << endl;
	cout << "donut의 반지름 = " << donut.getRadius() << " pizza의 반지름 = " << pizza.getRadius() << endl;
	donut.swap(pizza);
	cout << "---swap함수 실행 후---" << endl;
	cout << "donut의 반지름 = " << donut.getRadius() << " pizza의 반지름 = " << pizza.getRadius() << endl;

}