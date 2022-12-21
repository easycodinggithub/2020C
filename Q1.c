#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main1() {

	int a, b, c = 0;

	scanf("%d %d", &a, &b);

	c = (++a) + (b--);

	printf("a = %d, b = %d, c = %d", a, b, c);

	return 0;
}