#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	char tmp;
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, str, '\n');
		if (str == "exit") break;
		for (int i = 0; i < str.length() / 2; i++) {
			tmp = str[i];
			str[i] = str[str.length() - (i + 1)];
			str[str.length() - (i + 1)] = tmp;
		}
		cout << str << endl;
	}
}