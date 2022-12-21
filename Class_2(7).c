#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_2() {

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}

		for (int j = 0; j < (i * 2) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	/*int n = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}

		for (int j = 0; j < n; j++)
		{
			printf("*");
		}

		n += 2;
		printf("\n");
	}*/


	//int n = 1, num;

	//scanf("%d", &num);

	//for (int i = 0; i < num; i++)
	//{
	//	for (int j = 0; j < (num - 1) - i; j++)
	//	{
	//		printf(" ");
	//	}

	//	for (int j = 0; j < n; j++)
	//	{
	//		printf("*");
	//	}

	//	n += 2;
	//	printf("\n");
	//}
}