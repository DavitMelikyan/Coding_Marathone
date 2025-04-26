#include <stdio.h>
int palcount(int num);
int pal(int num);

int main() {
	int num = 0;
	printf("Enter a num: ");
	scanf("%d", &num);
	printf("Count is %d \n", palcount(num));

	return 0;
}

int pal(int num) {
	int reverse = 0;
	int num1 = num;
	while (num1 > 0) {
		reverse = reverse * 10 + (num1 % 10);
		num1 /= 10;
	}
	if (num == reverse) {
		return 1;
	} else {
		return 0;
	}
}

int palcount(int num) {
	int count = 0;
	while (!pal(num)) {
		int num1 = num;
		int reverse = 0;
		while (num1 > 0) {
                	reverse = reverse * 10 + (num1 % 10);
                	num1 /= 10;
		}
		num += reverse;
		++count;
        }
	return count;
}
