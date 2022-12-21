#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main3() {

	int a, b;
	scanf("%d %d", &a, &b);

	a += 100, b %= 10;

	printf("%d %d \n", a, b);

	return 0;
}