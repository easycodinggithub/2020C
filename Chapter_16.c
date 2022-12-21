#include <stdio.h>

void swap1(int, int); // call by value ��

void swap2(int*, int*); // call by reference ����

// �Լ� ȣ�� �Ŀ��� ���� ��ġ�� ����Ǿ��°�?

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
