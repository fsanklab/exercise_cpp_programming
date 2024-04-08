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
	int upORdown = rand() % 2; // 대문자(0) 소문자(1)
	// 1. 대문자라면 65~90 숫자 반환
	if (upORdown == 0)
		return rand() % 26 + 65;
	// 2. 소문자라면 97~122 숫자 반환
	else
		return rand() % 26 + 97;
}
double Random::nextDouble() {
	return rand() / 1000000.;
}

int main() {
	Random random;

	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++)
		cout << random.nextInt(1, 100) << ' ';
	cout << endl << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++)
		cout << (char)random.nextAlphabet() << ' ';
	cout << endl << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++)
		cout << random.nextDouble() << ' ';

}