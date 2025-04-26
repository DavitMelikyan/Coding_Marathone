#include <stdio.h>
int power(int num,int  exp);

int main() {
	int num = 0;
	int exp = 0;
	printf("Enter a num: ");
	scanf("%d", &num);
	printf("Enter the exponent: ");
	scanf("%d", &exp);
	printf("The result is %d", power(num, exp));
	return 0;
}

int power(int num,int  exp) {
	int res = 1;
	while (exp > 0) {
		res *= num;
		--exp;
	}
	return res;
}
