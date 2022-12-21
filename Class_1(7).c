#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main1() {

	int Class_1, Class_2, Class_3, Class_4;

	int sum = 0, avg = 0;

	scanf("%d %d %d %d", &Class_1, &Class_2, &Class_3, &Class_4);

	sum = Class_1 + Class_2 + Class_3 + Class_4;

	avg = sum / 4;

	printf("sum %d \n", sum);
	printf("avg %d \n", avg);

	return 0;
}