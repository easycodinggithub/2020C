#include <stdio.h>

int main22() {

	int i = 0, n;

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	do
	{
		printf("%d \n", i);
		++i;
	} while (i < n);

	return 0;

}