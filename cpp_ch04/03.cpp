#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int result = 0;
	cout << "���ڿ� �Է�>>";
	getline(cin, str, '\n');
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a')
			result++;
	}
	cout << "���� a�� " << result << "�� �ֽ��ϴ�." << endl;
}