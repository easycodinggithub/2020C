#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {

	int x1, y1, x2, y2;

	int height, weight, area;

	printf("첫 번째 좌하단 점 입력 : ");

	scanf("%d %d", &x1, &y1);

	printf("두 번째 우상단 점 입력 : ");

	scanf("%d %d", &x2, &y2);

	height = x1 - x2;

	weight = y1 - y2;

	area = height * weight;

	printf("사각형의 넓이는 %d", area);

	return 0;
}