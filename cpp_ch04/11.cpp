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
	cout << "���������� �弼��" << endl;
}
void CoffeeVendingMahcine::selectAmericano() {
	tong[0].consume();
	tong[1].consume(); tong[1].consume();
	cout << "�Ƹ޸�ī�� �弼��" << endl;
}
void CoffeeVendingMahcine::selectSugarCoffee() {
	tong[0].consume();
	tong[1].consume(); tong[1].consume();
	tong[2].consume();
	cout << "����Ŀ�� �弼��" << endl;

}
void CoffeeVendingMahcine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}
void CoffeeVendingMahcine::run() {
	int menu;

	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	while (1) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
		cin >> menu;
		// �߸��� �޴� ������ ���
		if (menu < 1 || menu>5) {
			cout << "�ش��ϴ� �޴��� �������� �ʽ��ϴ�. �ٽ� �������ּ���." << endl;
			continue;
		}

		// menu == 1
		if (menu == 1) {
			// ��ᰡ ������ ���
			if (tong[0].getSize() - 1 <= 0 || tong[1].getSize() - 1 <= 0) {
				cout << "���ᰡ �����մϴ�." << endl;
				continue;
			}
			selectEspresso();
		}
		else if (menu == 2) {
			// ��ᰡ ������ ���
			if (tong[0].getSize() - 1 <= 0 || tong[1].getSize() - 2<= 0) {
				cout << "���ᰡ �����մϴ�." << endl;
				continue;
			}
			selectAmericano();
		}
		else if (menu == 3) {
			// ��ᰡ ������ ���
			if (tong[0].getSize() - 1 <= 0 || tong[1].getSize() - 2 <= 0 || tong[2].getSize() - 1 <= 0) {
				cout << "���ᰡ �����մϴ�." << endl;
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