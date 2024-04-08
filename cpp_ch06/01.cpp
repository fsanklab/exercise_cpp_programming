#include <iostream>
using namespace std;

/* 1-1번
int add(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}
int add(int arr[], int size, int arr2[]) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
		sum += arr2[i];
	}
	return sum;
}
*/

// 1-2번
int add(int arr[], int size, int* arr2 = NULL) {
	int sum = 0;
	if (arr2 != NULL) // arr2 배열이 있다면
		for (int i = 0; i < size; i++) {
			sum += arr[i];
			sum += arr2[i];
		}
	else // arr2 배열이 없다면
		for (int i = 0; i < size; i++)
			sum += arr[i];
	return sum;
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}