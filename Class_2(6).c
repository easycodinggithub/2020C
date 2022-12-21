#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2() {

	int Class_1, Class_2;

	int A = 0, B = 0;

	scanf("%d %d", &Class_1, &Class_2);

	A = Class_1 / Class_2;

	B = Class_1 % Class_2;

	printf("%d / %d = %d...%d \n", Class_1, Class_2, A, B);

	return 0;
}