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
	Circle circleArray[3];
	int r, result = 0;

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		circleArray[i].setRadius(r);
		if (circleArray[i].getArea() > 100)
			result++;
	}
	cout << "면적이 100보다 큰 원은 " << result << "개 입니다" << endl;
}