#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
typedef struct Point {
	int x, y;
}Point;
int main() {

	float c;

	Point p1, p2;

	scanf("%d %d", &p1.x, &p1.y);

	scanf("%d %d", &p2.x, &p2.y);

	c = sqrt((pow(p1.x - p2.x, 2)) + (pow(p1.y - p2.y, 2)));

	printf("%f \n", c);

	return 0;
}