#include <stdio.h>
void arrinp(int *arr, const int size); 
void srch(int *arr, const int size, int target);

int main() {
	const int size = 10;
	int arr[size] = {};
	int target = 0;
	printf("Enter your target: ");
	scanf("%d", &target);
	arrinp(arr, size);
	srch(arr, size, target);
	return 0;
}

void arrinp(int *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a num: ");
                scanf("%d", &arr[i]);
        }
}

void srch(int *arr, const int size, int target) {
	int left = 0;
	int right = size - 1;
	int middle = (left + right) / 2;
	while(left < right) {
		middle = (left + right) / 2;
		if (arr[middle] < target) {	
			left = middle;
		} else if(arr[middle] > target) {
			right = middle;
		} else {
			printf("YES \n");
			return;
		}
	}
	printf("NO \n");
}
