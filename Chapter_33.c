// ½ÃÇè ¹®Á¦ ÃâÁ¦

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct Point PP;

struct Point
{
	int x, y;
};

int main() {

	PP p;
	p.x = 1;
	p.y = 2;

	printf("x ÁÂÇ¥ : %d, y ÁÂÇ¥ : %d \n", p.x, p.y);

	PP p1;

	p1.x = 3;
	p1.y = 4;

	printf("x ÁÂÇ¥ : %d, y ÁÂÇ¥ : %d \n", p1.x, p1.y);



}