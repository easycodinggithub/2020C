#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main3() {
	int num_1, num_2;

	int sum = 0, mul = 1;

	scanf("%d %d", &num_1, &num_2);

	for (int i = num_1; i <= num_2; i++)
	{
		sum += i;
		mul *= i;
	}

	printf("%d %d", sum, mul);

	return 0;
}