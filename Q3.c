#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main3() {

	double a, b, c, avg = 0;

	int sum = 0;

	scanf("%lf %lf %lf", &a, &b, &c);

	sum = (int)a + (int)b + (int)c;

	avg = (a + b + c) / 3.0;

	printf("sum = %d avg = %.0f", sum, avg);

	return 0;
}