#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	//for (int i = 1; i <= 5; i++)
	//{

	//	// 5 ÁÙ Ãâ·Â

	//	for (int k = 0; k < i - 1; k++)
	//	{
	//		printf(" ");
	//	}

	//	for (int j = 1; j <= 11 - i * 2; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	for (int i = 5; i >= 0; i--)
	{

		for (int k = 0; k < 5 - i; k++)
		{
			printf(" ");
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//********* // º° 9
	// ******* // ºóÄ­ 1, º° 7
	//  ***** // ºóÄ­ 2, º° 5
	//   *** // ºóÄ­ 3, º° 3
	//    * // ºóÄ« 4, º° 1

	return 0;
}