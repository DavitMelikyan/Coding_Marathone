#include <stdio.h>
void arrinp(int *arr, const int size); 
void arrmiddle(int *arr, const int size);

int main() {
	const int size = 5;
	int arr[size] = {};
	arrinp(arr, size);
	arrmiddle(arr, size);

	return 0;
}
void arrinp(int *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }
}

void arrmiddle(int *arr, const int size) {
	int sum = 0;
	int res = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	printf("%d \n", (sum / size - 1));
}
