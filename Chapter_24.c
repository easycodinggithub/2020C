#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n1;

	scanf("%d", &n1);

	for (int i = 1; i <= n1; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			if ((j < n1 && j > 1) && (i < n1 && i > 1) && j != i)
			{
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}