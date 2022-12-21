#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

	int* ptr1 = 0;
	int* ptr2 = 0;
	int* ptr3 = 0;

	// printf("%d %d \n", ptr1, ptr1++);
	printf("%d \n", ptr1++); // 1004, 4씩 증가
	printf("%d %d \n", ptr2++, ptr3++);
	printf("%d %d %d\n", ptr1, ptr2, ptr3); // 4가 증가됨
	printf("%p %p %p\n", ptr1, ptr2, ptr3);
	printf("%d %d %d\n", *ptr1, *ptr2, *ptr3);

	return 0;
}