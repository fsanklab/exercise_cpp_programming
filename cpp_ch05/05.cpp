#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() { cout << "반지름이 " << radius << "인 원" << endl; }
};
/* 수정 전 코드.
  목적대로 실행되지 않는다.
  매개변수객체 a, b는 increaseBy()가 끝나면 소멸되기 때문.
  값에 의한 호출이므로 매개변수객체로 단순 값만 복사되므로 
  main()의 x,y와 increaseBy()의 a,b는 별개의 객체이다.

void increaseBy(Circle a, Circle b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}
*/

// 수정 후 코드. 매개변수로 참조연산자를 사용하여 참조에 의한 호출을 구현했다.
void increaseBy(Circle& a, Circle& b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main() {
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}