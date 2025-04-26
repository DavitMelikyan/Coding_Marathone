#include <stdio.h>
int fibo(int n);

int main() {
	int n = 0;
	printf("Enter the n: ");
	scanf("%d", &n);
	printf("%d \n", fibo(n));
	return 0;
}

int fibo(int n) {
	int res = 0;
	int y = 0;
	int x = 1; 
	int count = 2;
	if (n < 2) {
		return n;
	}
	while (count <= n) {
		res = x + y;
		y = x;
		x = res;	
		++count;
	}
	return res;
}
