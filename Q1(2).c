#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2() {

	double area = 0, r;

	printf("������ �Է� : ");

	scanf("%lf", &r);

	area = (r * r) * 3.14;

	printf("������ %.lf �� ���� ���̴� %.1lf �Դϴ�.", r, area);

	return 0;
}