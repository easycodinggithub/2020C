#include <stdio.h>
int main() {

	int n1 = 1;
	int n2 = 2, n3 = 3;
	printf("n1=%d n2=%d n3=%d\n", n1, n2, n3);
	printf("n1=%d n2=%d n3=%d\n", n1+1, n2+1, n3+1);
	printf("n1=%d n2=%d n3=%d\n", ++n1, ++n2, ++n3);
	printf("n1=%d n2=%d n3=%d\n", n1++, n2++, n3++);


	return 0;
}