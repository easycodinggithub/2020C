#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	/*for (int i = 1; i <= 5; i++)
	{
		printf("*****\n");
	}*/

	for (int j = 1; j <= 5; j++)
	{
		for (int k = 1; k <= 5; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}