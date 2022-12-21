#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2() {

	double area = 0, r;

	printf("반지름 입력 : ");

	scanf("%lf", &r);

	area = (r * r) * 3.14;

	printf("반지름 %.lf 의 원의 넓이는 %.1lf 입니다.", r, area);

	return 0;
}