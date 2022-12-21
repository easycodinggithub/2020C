//#include <stdio.h>
//int main(void)
//{
//	int i, j, k, l;
//	for (int i = 0; i < 7; i++)
//	{
//		for (j = 0; j < 7; j++)
//		{
//			if (i == j || i + j == 6)
//			{
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main33() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j || i + j == n - 1)
			{
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}