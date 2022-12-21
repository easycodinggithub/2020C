#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_5() {

	for (int i = 1; i <= 9; i++)
	{
		printf("==================\n\n");
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %d \n\n", i, j, i * j);
		}
	}

	printf("==================\n\n");

	return 0;
}
