#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main4() {

	int n, nn, sum = 0, i = 1;

	printf("숫자를 입력하세요 : \n");

	scanf("%d", &nn);

	do
	{
		printf("0 입력시 종료 : ");
		scanf("%d", &n);
		sum += n;
	} while (i++ < nn);

	printf("%d", sum);
	return 0;
}

