#include <stdio.h>
void arrinp(int *arr, const int size);
void arrprt(int *arr1, int *arr2, const int size1, const int size2);

int main() {
	const int size1 = 3;
	const int size2 = 4;
	int arr1[size1] = {};
	int arr2[size2] = {};
	arrinp(arr1, size1);
	arrinp(arr2, size2);
	arrprt(arr1, arr2, size1, size2);
	
	return 0;
}

void arrinp(int *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }
}	

void arrprt(int *arr1, int *arr2, const int size1, const int size2) {
	for (int i = 0; i < size1 + size2; ++i) {
		if (i < size1) {
			printf("%d ", arr1[size1 - 1 - i]);
		} else { 
			printf("%d ", arr2[size2 + size1 - 1 - i]);
		}
	}
	printf("\n");
}
