#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main1() {
	double d1 = 1.23e-3;
	printf("%f \n", d1);
	printf("%e \n", d1);
	printf("%g \n", d1);
	
	double d2 = 1.234567e-3;
	printf("%f \n", d2);
	printf("%e \n", d2);
	printf("%g \n", d2);
	
	double d3 = 0.01234567;
	printf("%f \n", d3);
	printf("%e \n", d3);
	printf("%g \n", d3);

	return 0;
}