#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double weight[100];
	double avg = 0, sum = 0;

	printf("ü���Է� :");

	for (int i = 0; i < 6; i++)
	{
		scanf("%lf", &weight[i]);
		sum += weight[i];
	}

	avg = sum / 6;

	printf("���ü�� : %.1lf", avg);
}