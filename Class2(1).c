#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2() {
	// 2 ~ 9단 구구단 만들기 for 문 사용

	for (int i = 2; i <= 9; i++)
	{
		printf("=%d 단 ========== \n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d \n", i, j, i * j);
		}
		printf("\n\n\n");
	}

	// 역순으로 ...

	for (int i = 9; i >= 2; i--)
	{
		printf("=%d 단 ========== \n", i);
		for (int j = 9; j >= 1; j--)
		{
			printf("%d * %d = %d \n", i, j, i * j);
		}
		printf("\n\n\n");
	}

	return 0;
}