#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2() {
	// 2 ~ 9�� ������ ����� for �� ���

	for (int i = 2; i <= 9; i++)
	{
		printf("=%d �� ========== \n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d \n", i, j, i * j);
		}
		printf("\n\n\n");
	}

	// �������� ...

	for (int i = 9; i >= 2; i--)
	{
		printf("=%d �� ========== \n", i);
		for (int j = 9; j >= 1; j--)
		{
			printf("%d * %d = %d \n", i, j, i * j);
		}
		printf("\n\n\n");
	}

	return 0;
}