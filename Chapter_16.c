#include <stdio.h>

void swap1(int, int); // call by value 값

void swap2(int*, int*); // call by reference 참조

// 함수 호출 후에도 값의 위치가 변경되었는가?

int main() {
	int a = 5, b = 8;

	printf("a = %d, b = %d \n", a, b);

	swap1(a, b);

	printf("a = %d, b = %d \n", a, b);

	swap2(&a, &b);

	printf("a = %d, b = %d \n", a, b);

	return 0;
}

void swap1(int a, int b) {
	int temp;

	temp = a;

	a = b;

	b = temp;
}

void swap2(int* a, int* b) {
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
