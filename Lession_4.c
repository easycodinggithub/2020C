#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				/*if (((i * 100) + (j * 10) + k) + ((k * 100) + (j * 10) + i) == 1232)
				{
					printf("%d%d%d+%d%d%d==1232\n", i, j, k, k, j, i);
				}*/
				if ((i + k) * 100 + (j + j) * 10 + (k + i) == 1232)
				{
					printf("%d%d%d+%d%d%d==1232\n", i, j, k, k, j, i);
				}
			}
		}
	}
}