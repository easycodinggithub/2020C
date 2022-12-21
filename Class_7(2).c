#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a, b, c, sum_1 = 0, sum_2 = 0;

	char s_1, s_2;

	scanf("%d %c %d %c %d", &a, &s_1, &b, &s_2, &c);

	if (s_2 == '+')
	{
		sum_2 = b + c;

	}else if (s_2 == '-')
	{
		sum_2 = b - c;
	}
	else if (s_2 == '*')
	{
		sum_2 = b * c;
	}
	else
	{
		sum_2 = b / c;
	}

	if (s_1 == '+')
	{
		sum_1 = a + sum_2;
	}
	else {
		sum_1 = a - sum_2;
	}

	printf("%d", sum_1);

	return 0;
}