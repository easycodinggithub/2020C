#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int arr[3] = { 0, 1, 2 };
	int* p; // �����ʹ� �ּҸ� �����Ѵ�.
	p = arr; // �迭�� �̸� arr �� �ּ��̴�.

	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("%d %d %d \n", *p, *p + 1, *p + 2);
	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));

	return 0;
}