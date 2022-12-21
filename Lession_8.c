#pragma warning(disable : 4996)
#include <stdio.h>
int n;
void add(int);
int main() {
	printf("n : %d\n", n);
	add(3);
	printf("n : %d\n", n);
	n++;
	printf("n : %d\n", n);
	return 0;
}
void add(int x) {
	n += x;
}