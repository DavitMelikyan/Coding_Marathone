#include <stdio.h>
void arrmul(int *arr1, int *arr2, const int size);
void arrinp(int *arr, const int size);

int main() {
	const int size = 5;
	int arr1[size] = {};
	int arr2[size] = {};
	arrinp(arr1, size);
	arrinp(arr2, size);
	arrmul(arr1, arr2, size);
	return 0;
}

void arrinp(int *arr, const int size) {
	for (int i = 0; i < size; ++i) {
		printf("Enter a num: ");
		scanf("%d", &arr[i]);
	}
}

void arrmul(int *arr1, int *arr2, const int size) {
	for (int i = 0; i < size; ++i) {
		printf("Mul of values under index %d is %d \n", i, arr1[i] * arr2[i]);
	}
}
