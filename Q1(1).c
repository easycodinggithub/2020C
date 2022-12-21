#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main7() {

	int n;

	scanf("%d", &n);
	n = ~n;
	n++;
	printf("%d \n", n);
	return 0;
}