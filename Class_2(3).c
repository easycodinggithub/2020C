#include <stdio.h>

int main2() {

	int num = 1, sum = 0;

	while (num <= 10) {

		sum += num;

		num++;

	}

	printf("1���� 10������ �� = %d\n", sum);
	printf("while���� ���� ���� num�� �� = %d\n", num);

	return 0;

}