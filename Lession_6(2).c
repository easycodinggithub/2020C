#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p(int);
int main() {
	int n;
	scanf("%d", &n);
	p(n);
}
int p(int num) {
	int f1 = 1, f2 = 1, f3;
	if (num == 1)
	{
		printf("%d ", f1);
	}
	else
	{
		printf("%d %d ", f1, f2);
		for (int i = 0; i < num - 2; i++)
		{
			f3 = f1 + f2;
			printf("%d ", f3);
			f1 = f2;
			f2 = f3;
		}
	}
	return 0;
}
