#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {

	int x1, y1, x2, y2;

	int height, weight, area;

	printf("ù ��° ���ϴ� �� �Է� : ");

	scanf("%d %d", &x1, &y1);

	printf("�� ��° ���� �� �Է� : ");

	scanf("%d %d", &x2, &y2);

	height = x1 - x2;

	weight = y1 - y2;

	area = height * weight;

	printf("�簢���� ���̴� %d", area);

	return 0;
}