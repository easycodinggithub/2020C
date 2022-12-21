#include <stdio.h>
int main() {
	int i = 1;

	do {
		printf("%d*%d=%d\n", 3, i, 3 * i);
		++i;
	} while (i < 10);
	
	return 0;
}