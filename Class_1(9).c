#include <stdio.h>
int main() {
	int i = 1;

	while (i < 10)
	{
		printf("%d*%d=%d\n", 3, i, 3 * i);
		++i;
	}
	return 0;
}