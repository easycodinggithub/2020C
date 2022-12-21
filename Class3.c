#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a, b;

	int big, small;

	printf("두 수를 입력 : ");

	scanf("%d %d", &a, &b);

	if (a >= b) {
		big = a;
		small = b;
	}
	else {
		big = b;
		small = a;
	}

	printf("%d", big - small);

	/*if (a >= b) {
		printf("%d", a - b);
	}
	else {
		printf("%d", b - a);
	}*/

	return 0;
}