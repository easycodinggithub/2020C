#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int Array[3][4];

	int sum_1 = 0, sum_2 = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &Array[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		sum_1 = 0;
		for (int j = 0; j < 4; j++)
		{
			sum_1 += Array[i][j];
		}

		if (sum_1 >= 80)
		{
			printf("pass \n");
			sum_2++;
		}
		else {
			printf("fail \n");
		}
	}

	printf("гу╟щ : %d \n", sum_2);

	return 0;
}