#include <stdio.h>
int main() {

	int n1 = 1;

	printf("n1=%d\n", n1);
	printf("n1=%d\n", --n1);
	printf("n1=%d\n", n1++);
	++n1;

	printf("n1=%d\n", n1);
	++n1;
	printf("n1=%d\n", n1);
	printf("n1=%d\n", ++n1);

	return 0;
}