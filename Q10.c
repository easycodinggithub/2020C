#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a;
	scanf("%d", &a);

	printf("%d초는 %d분 %d초입니다. \n", a, a / 60, a % 60);

	return 0;
}