#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main4() {

	int n;

	scanf("%d", &n);

	printf("ASCII 문자 : %c \n", n);

	char nn;

	getchar();

	scanf(" %c", &nn);
			
	printf("ASCII 숫자 : %d \n", nn);

	return 0;
}