#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() { cout << "�������� " << radius << "�� ��" << endl; }
};
/* ���� �� �ڵ�.
  ������� ������� �ʴ´�.
  �Ű�������ü a, b�� increaseBy()�� ������ �Ҹ�Ǳ� ����.
  ���� ���� ȣ���̹Ƿ� �Ű�������ü�� �ܼ� ���� ����ǹǷ� 
  main()�� x,y�� increaseBy()�� a,b�� ������ ��ü�̴�.

void increaseBy(Circle a, Circle b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}
*/

// ���� �� �ڵ�. �Ű������� ���������ڸ� ����Ͽ� ������ ���� ȣ���� �����ߴ�.
void increaseBy(Circle& a, Circle& b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main() {
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}