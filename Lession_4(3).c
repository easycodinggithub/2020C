#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	double math, english, science;
	double total = 0;
	scanf("%lf %lf %lf", &math, &english, &science);

	total = ceil(math) + ceil(english) + ceil(science);
	printf("%0.1lf", total);
	return 0;
}
