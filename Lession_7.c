#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

	int arr[100];
	int big_num = 0;


	printf("입력 : ");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < 5; j++)
	{
		printf("%d ", arr[j]);
		if (arr[j] >= big_num)
		{
			big_num = arr[j];
		}
	}
	printf("\n최대 값 : %d", big_num);
	return 0;
}