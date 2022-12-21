#include <stdio.h>
int main_1() {

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//for (int i = 5; i > 0; i--)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

}