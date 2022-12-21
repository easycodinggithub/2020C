#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a, b, c;

	int result = 0;

	printf("세 수를 입력 : ");

	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c) {
		result = a;
	}
	else if (b >= a && b >= c) {
		result = b;
	}
	else {
		result = c;
	}

	printf("입력받은 수 중 가장 큰 수는 %d 입니다.", result);

	return 0;
}