#include <stdio.h>

int main() {

	int i = 1, dan;

	printf("단을 입력하세요 : ");
	scanf_s("%d", &dan);

	while (i < 10)
	{
		printf("%d X %d = %d \n", dan, i, dan * i);

		++i;
	}

	return 0;

}