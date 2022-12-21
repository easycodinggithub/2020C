#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {
	for (int i = 2; i * i <= n; i++)
	{
		if (!(n % i))
		{
			return 0;
		}
	}
	return 1;
}

int main() {
	while (1)
	{
		int n;
		printf("¼ýÀÚ :");
		scanf("%d", &n);
		if (n < 2)
		{
			return 0;
		}
		if (n >= 1000) {
			printf("\n");
			continue;
		}
		int primeCnt = 1;
		for (int i = 2; i <= n; i++)
		{
			if (isPrime(i))
			{
				printf("%d ", i);
			}
			for (int j = 2; j * j <= i; j++)
			{
				if (!(n % i))
				{
					return 0;
				}
			}
		}
		printf("\n");
	}
	return 0;
}