#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main1() {

	int a, b, c, d, e;
	printf("5���� ���� �Է��Ͻÿ�.");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	a += 3, b -= 3, c *= 3, d /= 3, e %= 3;

	printf("%d %d %d %d %d \n", a, b, c, d, e);

	return 0;
}