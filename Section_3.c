#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[100];
	int max = 0, min = 1000;

	printf("입력정수 : ");

	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 999)
		{
			arr[i] = 0;
			min = 0;
			break;
		}
		if (arr[i] >= max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	printf("max : %d \n", max);
	printf("min : %d \n", min);
	return 0;
}