#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a;
	scanf("%d", &a);

	printf("%d�ʴ� %d�� %d���Դϴ�. \n", a, a / 60, a % 60);

	return 0;
}