#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int height_1, weight_1;
	int height_2, weight_2;
	int sum;

	scanf("%d %d", &height_1, &weight_1);
	scanf("%d %d", &height_2, &weight_2);

	sum = height_1 > height_2 && weight_1 > weight_2;

	printf("%d", sum);

	return 0;
}