#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c;

	int avg = 0;

	printf("�Է����� : ");

	scanf("%d %d %d", &a, &b, &c);

	avg = (a + b + c) / 3;

	if (avg >= 80)
	{
		printf("�հ�! %d \n", avg);
	}
	else {
		printf("���հ�! %d \n", avg);
	}

	return 0;
}