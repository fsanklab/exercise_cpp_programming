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
	// 1. ���ο� �����迭�� s1[]�� ����
	for (int i = 0; i < size; i++) newArray2[i] = s1[i];
	// 2. s1[]�� s2[]�� ���Ұ� �ִٸ� ����
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			if (newArray2[i] == s2[j])
				
	}
}

int main() {
	int x[5], y[5];
	cout << "���� 5 �� �Է��϶�. �迭 x�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	cout << "���� 5 �� �Է��϶�. �迭 y�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) cin >> y[i];

	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;
	int* arr = ArrayUtility2::concat(x, y, 5);
	for (int i = 0; i < 10; i++) cout << arr[i] << ' ';
	cout << endl;

	int size;
	arr = ArrayUtility2::remove(x, y, 5, size);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << size << endl;
	for (int i = 0; i < size; i++)cout << arr[i] << ' ';
	cout << endl;

}