#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int a[5] = { 0, 1, 2, 3, 4 }; // �迭�� �̸��� �ּҴ�.

	printf("%d %d \n", a[0], a[1]);
	printf("%p %p \n", &a[0], &a[1]);

	printf("a�� �ּ�=%p a[0]�� �ּ�=%p \n", &a, &a[0]);
	int* p = a;
	printf("a�� �ּ�=%p \n", p);

	return 0;
}