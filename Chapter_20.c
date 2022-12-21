#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char Array[100][100] = { 0, };

	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i != 0 && i != n - 1) && (j != 0 && j != n - 1))
			{
				Array[i][j] = ' ';
			}
			else {
				Array[i][j] = '*';
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
				printf("%c", Array[i][j]);
		}
		printf("\n");
	}

	return 0;
}