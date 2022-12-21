#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_1() {
	int sum = 0, num = 0;
	while (num <= 100)
	{
		num++;
		if (num % 2 == 1)
		{
			continue;
		}
		printf("%d ", num);
	}
	return 0;
}
