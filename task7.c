#include <stdio.h>
void arrprt(int *arr1, int *arr2, const int size);
void arrinp(int *arr, const int size);

int main() {
        const int size = 5;
        int arr1[size] = {};
        int arr2[size] = {};
        arrinp(arr1, size);
        arrinp(arr2, size);
        arrprt(arr1, arr2, size);
        return 0;
}

void arrinp(int *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }
}

void arrprt(int *arr1, int *arr2, const int size) {
	for (int i = 0; i < 2 * size; ++i) {
		if (i < size) {
			printf("%d", arr1[i]);
		} else {
			printf("%d", arr2[i - size]);
		}	
	}	
	printf("\n");	
}	
