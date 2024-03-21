#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int result = 0;
	cout << "문자열 입력>>";
	getline(cin, str, '\n');
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a')
			result++;
	}
	cout << "문자 a는 " << result << "개 있습니다." << endl;
}