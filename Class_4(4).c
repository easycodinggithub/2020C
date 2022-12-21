#include <stdio.h>

int main22() {

	int i = 0, n;

	printf("수를 입력하세요 : ");
	scanf_s("%d", &n);

	do
	{
		printf("%d \n", i);
		++i;
	} while (i < n);

	return 0;

}