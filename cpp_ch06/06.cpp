#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};
int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* newArray = new int[size * 2];
	for (int i = 0; i < size; i++) newArray[i] = s1[i];
	for (int i = 0; i < size; i++) newArray[size + i] = s2[i];
	return newArray;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int* newArray2 = new int[size];
	int flag = 1, index = 0;
	for (int i = 0; i < size; i++) {
		// s1[]의 원소가 s2[]에 없는거라면 저장
		for (int j=0;j<size;j++)
			if (s1[i] == s2[j]) {
				flag = 0; break;
			}
		if (flag)
			newArray2[index++] = s1[i];
	}
	retSize = index;
	return newArray2;
}

int main() {
	int x[5], y[5];
	cout << "정수 5 개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	cout << "정수 5 개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> y[i];

	cout << "합친 정수 배열을 출력한다" << endl;
	int* arr = ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < 10; i++) cout << arr[i] << ' ';
	cout << endl;

	int size;
	arr = ArrayUtility2::remove(x, y, 5, size);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << size << endl;
	for (int i = 0; i < size; i++)cout << arr[i] << ' ';
	cout << endl;

}