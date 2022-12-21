#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int fibonacci(int n);
int main() {
	int num;
	scanf("%d", &num);
	printf("피보나치 수열\n");
	fibonacci(num);
	printf("\n\n");
	return 0;
}
int fibonacci(int n) {
	int f1 = 0, f2 = 1, f3;
	if (n == 1) {
		printf("%d ", f1);
	}
	else {
		printf("%d %d ", f1, f2);
		for (int i = 0; i < n - 2; i++)
		{
			f3 = f1 + f2;
			printf("%d ", f3);
			f1 = f2;
			f2 = f3;
		}
	}
}
