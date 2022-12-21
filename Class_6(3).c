#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a, b, sum = 1;

	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++)
	{
		sum *= i;
	}

	printf("%d", sum);

	return 0;
}