#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5];
	
	int bignum = 0;

	int smallnum = 10000;

	int sum = 0;

	int location_big = 0;
	
	int location_small = 0;

	// 5개의 숫자를 입력받는 코드

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < 5; j++)
	{
		if (arr[j] >= bignum) {
			bignum = arr[j];
			location_big = j;
		}

		if (arr[j] <= smallnum) {
			smallnum = arr[j];
			location_small = j;
		}

		sum += arr[j];
	}

	printf("가장 큰 값은 %d 이고, 있는 위치는 : %d\n", bignum, location_big);
	printf("가장 작은 값은 %d 이고, 있는 위치는 : %d\n", smallnum, location_small);
	printf("총합은 %d 이다\n", sum);
	return 0;
}