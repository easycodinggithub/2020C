#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2() {
	
	int a, b, c;

	printf("10진수, 8진수, 16진수 \n");

	scanf("%d %o %x", &a, &b, &c);

	printf("--10진수로 바꾸면--- \n");

	printf("%x %x %x", a, b, c);

	return 0;
}	
	
    