#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int arr[3] = { 0, 1, 2 };
	int* p; // 포인터는 주소를 저장한다.
	p = arr; // 배열의 이름 arr 은 주소이다.

	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("%d %d %d \n", *p, *p + 1, *p + 2);
	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));

	return 0;
}