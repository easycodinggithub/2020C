#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int n1, int n2);
double divv(int n1, int n2);
int output(int a, int b);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	output(a, b);
	return 0;
}

int add(int n1, int n2) {
	return n1 + n2;
}

int sub(int n1, int n2) {
	return n1 - n2;
}

int mul(int n1, int n2) {
	return n1 * n2;
}

double divv(int n1, int n2) {
	return n1 / n2;
}

int output(int a, int b) {
	printf("%d\n", add(a, b));
	printf("%d\n", sub(a, b));
	printf("%d\n", mul(a, b));
	printf("%lf\n", divv(a, b));
}
