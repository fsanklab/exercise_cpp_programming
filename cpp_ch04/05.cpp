#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
	string str;
	int index, alphabet;
	srand((unsigned)time(NULL));
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�)" << endl;

	while (1) {
		cout << ">>";
		getline(cin, str, '\n');
		if (str == "exit") return 0;
		index = rand() % (str.length());
		alphabet = rand() % 26 + 97;
		str[index] = (char)alphabet;
		cout << str << endl;
	}
}