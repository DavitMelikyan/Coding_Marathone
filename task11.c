#include <stdio.h>
void multab(int num);

int main() {
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	multab(num);
	return 0;
}

void multab(int num) {
	printf("  Number \t i \t Result \n");
	for (int i = 1; i <= 10; ++i) {
		printf("     %d %11d \t %5d \n", num, i, num * i);
	}
}
