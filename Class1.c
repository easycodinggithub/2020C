#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main1() {
	// 2단 구구단 만들기 for 문 사용
	int dan = 2, n = 0;
	for (n = 1; n < 10; n++)
	{
		printf("%d * %d = %d \n", dan, n, dan * n);
	}
	printf("%d \n",n);
	return 0;
}