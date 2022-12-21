#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2() {

	int a, b, c, sum = 0;

	double avg = 0;

	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	avg = (double)sum / 3;

	printf("avg = %.1f", avg);

	return 0;
}