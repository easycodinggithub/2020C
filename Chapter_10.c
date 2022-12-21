#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int num;

	int sort[11] = { 0, };

	while (1)
	{

		scanf("%d", &num);

		if (num <= 0 || num >= 11)
		{
			break;
		}

		sort[num - 1]++;
	}

	for (int i = 0; i <= 9; i++)
	{
		if (sort[i] > 0)
		{
			printf("%d : %d°³ \n", i + 1, sort[i]);
		}
	}

	return 0;
}