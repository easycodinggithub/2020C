#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_6() {

	/*for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if ((i * j) % 2 == 1)
			{
				continue;
			}
			printf("%d * %d = %d \n\n", i, j, i * j);
		}
	}*/

	for (int i = 1; i <= 9; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		for (int j = 1; j <= 9; j++)
		{
			if (i < j)
			{
				break;
			}
			printf("%d * %d = %d \n\n", i, j, i * j);
		}
	}
	return 0;
}
