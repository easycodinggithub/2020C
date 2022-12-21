#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int num1 = 100, num2 = 100;
	int* pNum;
	pNum = &num1;
	(*pNum) = 50;
	pNum = &num2;
	(*pNum) = -30;
	printf("%d %d \n", num1, num2);
	return 0;
}