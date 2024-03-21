#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int n, r, result = 0;
	cout << "���� ���� >> ";
	cin >> n;
	Circle* circles = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		circles[i].setRadius(r);
		if (circles[i].getArea() > 100)
			result++;
	}
	cout << "������ 100���� ū ���� " << result << "�� �Դϴ�" << endl;
	delete [] circles;
}