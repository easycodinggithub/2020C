#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5];
	
	int bignum = 0;

	int location = 0;
	// 5���� ���ڸ� �Է¹޴� �ڵ�

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

	printf("���� ū ���� �ִ� ��ġ�� : %d", location);
}