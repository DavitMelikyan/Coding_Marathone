#include <stdio.h>
int sum(int num);

int main() {
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("The sum of digits is %d \n", sum(num));
	return 0;
}

int sum(int num) {
	int num1 = 0;
	int dsum = 0;
	while (num > 0) {
		num1 = num % 10;
		num /= 10;
		dsum += num1;
	}
	return dsum;
}
