#include <stdio.h>
int fact(int num);

int main() {
	int num = 0;
	printf("Enter a num: ");
	scanf("%d", &num);
	printf("The result is %d", fact(num));

	return 0;
}

int fact(int num) {
	int res = 1;
	for (int i = 2; i <= num; ++i) {
		res *= i;
	}
	return res;
}
