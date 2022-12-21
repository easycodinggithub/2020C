#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_3() {
	int sum = 0, num = 0, n = 0;

	while (1) {
		++n;
		sum += n;
		if (sum > 50000) {
			printf("%d \n", sum -= n);
			printf("%d \n", --n);
			break;
		}
	}
	return 0;
}
