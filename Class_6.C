#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int n1 = 0xAA, n2 = 0x53;
	//int n3 = 035, n4 = 027;
	//printf("%d \n", n1);
	//printf("%d \n", n2);
	//printf("%d \n", n3);
	//printf("%d \n", n4);

	float n = 0.0;
	for (int i = 0; i < 100; i++) {

		n = n + 0.1;

	}

	printf("%f\n", n);
	return 0;
}