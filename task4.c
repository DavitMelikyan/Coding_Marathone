#include <stdio.h>
void arrinp(char *arr, const int size);
void symprt(char *arr, const int size);

int main() {
	const int size = 5;
	char arr[size] = {};
	arrinp(arr,size);
	symprt(arr,size);

	return 0;
}

void arrinp(char *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a char: ");
                scanf(" %c", &arr[i]);
        }
}

void symprt(char *arr, const int size) {
	for (int i = 0; i < size; ++i) {
		if (arr[i] > '0' && arr[i] <= '9') {
			printf("%d" , (arr[i] - '0'));
		}
	}
	printf("\n");
}
