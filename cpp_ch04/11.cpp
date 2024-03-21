#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { this->size = 10; }
	void consume() { size--; }
	int getSize() { return this->size; }
};

class CoffeeVendingMahcine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};
void CoffeeVendingMahcine::fill() {
	for (int i = 0; i < 3; i++)
		tong[i].fill();
}
void CoffeeVendingMahcine::selectEspresso() {
	tong[0].consume();
	tong[1].consume();
	cout << "에스프레소 드세요" << endl;
}
void CoffeeVendingMahcine::selectAmericano() {
	tong[0].consume();
	tong[1].consume(); tong[1].consume();
	cout << "아메리카노 드세요" << endl;
}
void CoffeeVendingMahcine::selectSugarCoffee() {
	tong[0].consume();
	tong[1].consume(); tong[1].consume();
	tong[2].consume();
	cout << "설탕커피 드세요" << endl;

}
void CoffeeVendingMahcine::show() {
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}
void CoffeeVendingMahcine::run() {
	int menu;

	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while (1) {
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
		cin >> menu;
		// 잘못된 메뉴 선택한 경우
		if (menu < 1 || menu>5) {
			cout << "해당하는 메뉴가 존재하지 않습니다. 다시 선택해주세요." << endl;
			continue;
		}

		// menu == 1
		if (menu == 1) {
			// 재료가 부족한 경우
			if (tong[0].getSize() - 1 <= 0 || tong[1].getSize() - 1 <= 0) {
				cout << "원료가 부족합니다." << endl;
				continue;
			}
			selectEspresso();
		}
		else if (menu == 2) {
			// 재료가 부족한 경우
			if (tong[0].getSize() - 1 <= 0 || tong[1].getSize() - 2<= 0) {
				cout << "원료가 부족합니다." << endl;
				continue;
			}
			selectAmericano();
		}
		else if (menu == 3) {
			// 재료가 부족한 경우
			if (tong[0].getSize() - 1 <= 0 || tong[1].getSize() - 2 <= 0 || tong[2].getSize() - 1 <= 0) {
				cout << "원료가 부족합니다." << endl;
				continue;
			}
			selectSugarCoffee();
		}
		else if (menu == 4) {
			show();
		}
		else {
			fill();
		}
	}
} // end of run()


int main() {
	CoffeeVendingMahcine machine;
	machine.run();
}