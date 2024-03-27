#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	// 1. 두 수가 같다면, true 리턴
	if (a == b)
		return true;
	// 2. 두 수가 다르다면, false리턴 + 큰 수를 big에 전달
	a > b ? big = a : big = b;
	return false;
}

int main() {
	int a, b, big;
	cout << "2개의 정수를 입력하세요\n>> ";
	cin >> a >> b;

	if (bigger(a, b, big) == true)
		cout << "두 수는 같습니다." << endl;
	else
		cout << "큰 수는 " << big << "입니다." << endl;
}