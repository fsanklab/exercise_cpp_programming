#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	int i = 0;
	// 1. 문자를 찾음
	while (a[i]) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
		i++;
	}
	// 2. 문자를 못찾음
	success = false;
	return a[0];
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}