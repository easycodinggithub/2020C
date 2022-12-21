#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main_2() {
	int sum = 0, num = 0, n = 0;

	while (1) {
		sum += n;
		if (sum > 100000) {
			printf("%d", n);
			break;
		}
		++n;
	}
	return 0;
}
