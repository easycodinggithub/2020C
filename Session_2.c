#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5];
	
	int bignum = 0;

	int location = 0;
	// 5개의 숫자를 입력받는 코드

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < 5; j++)
	{
		if (arr[j] >= bignum) {
			bignum = arr[j];
			location = j;
		}
	}

	printf("가장 큰 값은 %d 이고, 있는 위치는 : %d", bignum, location);
}