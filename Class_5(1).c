#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	/*for (int i = 0; i < 101; i++)
	{
		if (i % 3 == 0) {
			printf("%4d", i);
		}
	}*/

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0) {
			printf("%4d", i);
		}
		if (i % 15 == 0) {
			printf("\n");
		}
	}

}