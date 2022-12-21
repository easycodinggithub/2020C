#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_3() {

	int n;

	scanf("%d", &n);

	if (n < 0) {

		printf("0보다 작다 \n");

	}
	else if (n > 0)
	{
		printf("0보다 크다 \n");
	}
	else {
		printf("0과 같다 \n");
	}

}