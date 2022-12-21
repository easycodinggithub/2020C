#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double weight[100];
	double avg = 0, sum = 0;

	printf("체중입력 :");

	for (int i = 0; i < 6; i++)
	{
		scanf("%lf", &weight[i]);
		sum += weight[i];
	}

	avg = sum / 6;

	printf("평균체중 : %.1lf", avg);
}