#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double n1, n2;
	scanf("%lf", &n1);
	scanf("%lf", &n2);

	printf("���� : %5.1lf + %5.1lf = %5.1lf\n", n1, n2, n1 + n2);
	printf("���� : %5.1lf - %5.1lf = %5.1lf\n", n1, n2, n1 - n2);
	printf("���� : %5.1lf * %5.1lf = %5.1lf\n", n1, n2, n1 * n2);
	printf("���� : %5.1lf / %5.1lf = %5.1lf\n", n1, n2, n1 / n2);

	// char => %c
	// int => %d
	// long => %ld
	// float => %f
	// double => %lf

	return 0;
}