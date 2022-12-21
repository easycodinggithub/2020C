#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[100];
	int sum_1 = 0, sum_2 = 0;

	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &arr[i-1]);
		if (i % 2 == 0)
		{
			sum_1 += arr[i-1];
		}
		else {
			sum_2 += arr[i-1];
		}
	}

	printf("odd : %d \n", sum_2);
	printf("even : %d \n", sum_1);

	return 0;
}