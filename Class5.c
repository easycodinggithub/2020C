#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a, b, c;

	int result = 0;

	printf("�� ���� �Է� : ");

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

	printf("�Է¹��� �� �� ���� ū ���� %d �Դϴ�.", result);

	return 0;
}