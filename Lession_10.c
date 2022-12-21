#pragma warning(disable : 4996)
#include <stdio.h>
int fact(int);
int main() {
	printf("%d\n", fact(5));
	return 0;
}
int fact(int n) {
	if (n == 0)
	{
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}
