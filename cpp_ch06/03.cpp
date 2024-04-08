#include <iostream>
using namespace std;

/* 3-1¹ø
int big(int a, int b) {
	return a > b ? a : b;
}
int big(int a, int b, int c) {
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}
*/
// 3-2¹ø
int big(int a, int b, int c = 0) {
	int max = a;
	max < b ? max = b : max = max;
	max < c ? max = c : max = max;
	return max;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}