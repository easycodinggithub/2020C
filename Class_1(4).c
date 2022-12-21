#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, sum = 1;

	scanf("%d", &num);

	for (int i = num; i >= 1; i--)
	{
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}