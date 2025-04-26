#include <stdio.h>
char* revprt(char *arr, const int size);
void arrinp(char *arr, const int size);


int main() {
	const int size = 5;
	char arr[size] = {};	
	arrinp(arr, size);
	revprt(arr, size);		
	for (int i = 0; i < size; ++i) {
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}

void arrinp(char *arr, const int size) {
        for (int i = 0; i < size; ++i) {
                printf("Enter a char: ");
                scanf(" %c", &arr[i]);
        }
}


char *revprt(char *arr, const int size) {
	for (int i = 0; i < size / 2; ++i) {
		char tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}
	return arr;
}
		
