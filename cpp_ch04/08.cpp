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
	cout << "원의 개수 >> ";
	cin >> n;
	Circle* circles = new Circle[n];

	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		circles[i].setRadius(r);
		if (circles[i].getArea() > 100)
			result++;
	}
	cout << "면적이 100보다 큰 원은 " << result << "개 입니다" << endl;
	delete [] circles;
}