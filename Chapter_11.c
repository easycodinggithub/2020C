#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int Array[3][3];

	int sum = 0;

	int lastsum = 0;

	for (int i = 0; i < 3; i++)
	{
		printf("%d번 점수 : ", i + 1);

		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &Array[i][j]);
		}
	}

	printf("      컴일 프C 수학 총점 \n");

	for (int i = 0; i < 3; i++)
	{
		sum = 0;

		printf(" %d번", i + 1);

		for (int j = 0; j < 3; j++)
		{
			printf("%5d", Array[i][j]);

			sum += Array[i][j];
		}

		lastsum += sum;

		printf("%5d\n", sum);
	}

	printf("합계");

	for (int i = 0; i < 3; i++)
	{
		sum = 0;

		for (int j = 0; j < 3; j++)
		{
			sum += Array[j][i];
		}

		printf("%5d", sum);
	}

	printf("%5d", lastsum);

	return 0;
}