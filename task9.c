#include <stdio.h>
float Cels(float degree);

int main() {
	float degree = 0;
	printf("Enter degree in Fahrenheit: ");
	scanf("%f", &degree);
	degree = Cels(degree);
	printf("Your degree in Celsius is %f \n", degree);
	
	return 0;
}

float Cels(float degree) {
	return (degree - 32) * (5.0 / 9.0);
}
