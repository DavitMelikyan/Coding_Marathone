#include <stdio.h>
void arrinp(char *arr, const int size);
void upperstr(char * arr, const int size);

int main() {
	const int size = 5;
	char arr[size] = {};
	arrinp(arr, size);
	upperstr(arr, size);

	return 0;
}

void arrinp(char *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a char: ");
                scanf(" %c", &arr[i]);
        }
}

void upperstr(char * arr, const int size) {
	for (int i = 0; i < size; ++i) {
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			arr[i] ^= 32;
		}
	}
	printf("%s \n", arr);
}
