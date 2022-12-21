#include <stdio.h>
int main_2() {
	int n, abs;
	scanf_s("%d", &n);
	if (n < 0) {
		n = n * -1;
	}
	else {
		abs = n;
	}
	printf("%d", n);

	abs = n > 0 ? n : n * -1;

	printf("%d", n);

}