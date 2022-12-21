#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_7() {

	/*int A = 0, Z = 9, sum = 0;

	sum = (A * 10 + Z) + (Z * 10 + A);

	printf("( A * 10 + Z ) + ( Z * 10 + A ) == %d", sum);*/

	int sum = 0;

	for (int A = 0; A < 10; A++)
	{
		for (int Z = 0; Z < 10; Z++)
		{
			if (A == Z) {
				continue;
			}
			sum = (A * 10 + Z) + (Z * 10 + A);
			if (sum == 99) {
				printf("A = %d, Z = %d \n", A, Z);
			}
		}
	}

	return 0;
}
