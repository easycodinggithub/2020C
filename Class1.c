#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main1() {
	// 2�� ������ ����� for �� ���
	int dan = 2, n = 0;
	for (n = 1; n < 10; n++)
	{
		printf("%d * %d = %d \n", dan, n, dan * n);
	}
	printf("%d \n",n);
	return 0;
}