#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct p Point;

struct p {
	double x, y;
};

int main() {
	Point p1, p2, p3;
	scanf("%lf %lf", &p1.x, &p1.y);
	scanf("%lf %lf", &p2.x, &p2.y);
	scanf("%lf %lf", &p3.x, &p3.y);

	printf("%.1lf, %.1lf", (p1.x + p2.x + p3.x) / 3, (p1.y + p2.y + p3.y) / 3);
	return 0;
}
