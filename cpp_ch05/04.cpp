#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	// 1. �� ���� ���ٸ�, true ����
	if (a == b)
		return true;
	// 2. �� ���� �ٸ��ٸ�, false���� + ū ���� big�� ����
	a > b ? big = a : big = b;
	return false;
}

int main() {
	int a, b, big;
	cout << "2���� ������ �Է��ϼ���\n>> ";
	cin >> a >> b;

	if (bigger(a, b, big) == true)
		cout << "�� ���� �����ϴ�." << endl;
	else
		cout << "ū ���� " << big << "�Դϴ�." << endl;
}