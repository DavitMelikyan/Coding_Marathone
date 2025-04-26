#include <stdio.h>
void multable();

int main() {
	multable();
}

void multable() {
	for (int j = 1; j <= 10; ++j) {
		printf("Number \t I \t Result \n");
		for (int i = 1; i <= 10; ++i) {
			printf("%d %7d %7d \n", j, i, j * i);
		}
	}
}
