#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee, water, sugar;
public:
	CoffeeMachine() : CoffeeMachine(0, 0, 0) {};
	CoffeeMachine(int c, int w, int s);
	void show();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}
void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << " ��:" << water <<" ����:" << sugar << endl;
}
void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
}
void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
}
void CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1;
	water -= 2;
	sugar -= 1;
}
void CoffeeMachine::fill() {
	coffee = 10; water = 10; sugar = 10;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}
