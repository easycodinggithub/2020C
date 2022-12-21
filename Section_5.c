#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c;

	int avg = 0;

	printf("입력점수 : ");

	scanf("%d %d %d", &a, &b, &c);

	avg = (a + b + c) / 3;

	if (avg >= 80)
	{
		printf("합격! %d \n", avg);
	}
	else {
		printf("불합격! %d \n", avg);
	}

	return 0;
}