#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a, b, small = 0, big = 0, sum = 1;

	scanf("%d %d", &a, &b);

	if (a > b)
	{
		small = b;
		big = a;
	}
	else
	{
		small = a;
		big = b;
	}

	for (int i = small; i <= big; i++)
	{
		sum *= i;
	}

	printf("%d", sum);

	return 0;
}