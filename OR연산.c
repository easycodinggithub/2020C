#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1() {

	int a, b;
	int ornum;

	scanf("%d %d", &a, &b);

	ornum = a | b;

	printf("%d", ornum);

	return 0;
}