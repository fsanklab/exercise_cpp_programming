#include <iostream>
using namespace std;

int main() {
	int *intArray = new int[5];
	double sum = 0.;

	cout << "���� 5�� �Է�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> intArray[i];
		sum += intArray[i];
	}
	cout << "��� " << sum / 5. << endl;
}