#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5];
	
	int bignum = 0;

	int smallnum = 10000;

	int sum = 0;

	int location_big = 0;
	
	int location_small = 0;

	// 5���� ���ڸ� �Է¹޴� �ڵ�

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

	printf("���� ū ���� %d �̰�, �ִ� ��ġ�� : %d\n", bignum, location_big);
	printf("���� ���� ���� %d �̰�, �ִ� ��ġ�� : %d\n", smallnum, location_small);
	printf("������ %d �̴�\n", sum);
	return 0;
}