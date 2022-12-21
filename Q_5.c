#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int i = 1, j = 1, dan;

	while (i < 10)
	{
		j = 1;
		while (j < 10)
		{
			printf("%d * %d = %d \n", i, j, i * j);
			j++;
		}
		i++;
		printf("\n");
	}

	return 0;
}

