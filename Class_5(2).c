#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	for (int i = 5; i > 0; i--)
	{

		for (int k = 0; k < 5 - i; k++)
		{
			printf(" ");
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			printf("*");
		}
			printf("\n");
	}

	for (int i = 1; i < 5; i++)
	{

		for (int k = 0; k < 4 - i; k++)
		{
			printf(" ");
		}

		for (int j = 1; j <= i * 2 + 1; j++)
		{
			printf("*");
		}
			printf("\n");
	}

	return 0;
}