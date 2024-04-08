#include <iostream>
using namespace std;

class Random {
public:
	Random() { seed(); }
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};
int Random::nextInt(int min, int max) {
	return (rand() % max) + min;
}
char Random::nextAlphabet() {
	int upORdown = rand() % 2; // �빮��(0) �ҹ���(1)
	// 1. �빮�ڶ�� 65~90 ���� ��ȯ
	if (upORdown == 0)
		return rand() % 26 + 65;
	// 2. �ҹ��ڶ�� 97~122 ���� ��ȯ
	else
		return rand() % 26 + 97;
}
double Random::nextDouble() {
	return rand() / 1000000.;
}

int main() {
	Random random;

	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
		cout << random.nextInt(1, 100) << ' ';
	cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
		cout << (char)random.nextAlphabet() << ' ';
	cout << endl << "������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
		cout << random.nextDouble() << ' ';

}