#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main5() {

	int i = 1, dan;

	scanf("%d", &dan);

	while (i < 10)
	{
		printf("%d * %d = %d \n", dan, i, dan * i);
		i++;
	}

	return 0;
}

