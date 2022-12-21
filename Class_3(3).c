#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main3() {

	int width, height;

	scanf("%d %d", &width, &height);

	width += 5;

	height *= 2;

	printf("width = %d \n", width);
	printf("height = %d \n", height);
	printf("area = %d \n", width * height);

	return 0;
}