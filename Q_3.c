#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main4() {

	int n, nn, sum = 0, i = 1;

	printf("���ڸ� �Է��ϼ��� : \n");

	scanf("%d", &nn);

	do
	{
		printf("0 �Է½� ���� : ");
		scanf("%d", &n);
		sum += n;
	} while (i++ < nn);

	printf("%d", sum);
	return 0;
}

