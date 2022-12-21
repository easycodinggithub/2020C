#include <stdio.h>

int main33() {

	int i = 1, n, sum = 0;

	scanf_s("%d", &n);

	while (i <= n) {

		sum += i;

		++i;

	}

	printf("%d", sum);

	return 0;

}