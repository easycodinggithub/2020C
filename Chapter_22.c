#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

int sum(int);

int main() {

	scanf("%d", &n);

	printf("%d\n", sum(n));

	return 0;
}

int sum(int n) {

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	return sum;
}
