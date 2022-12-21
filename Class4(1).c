#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main4() {
	
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 6 - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}