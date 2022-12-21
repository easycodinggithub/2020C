#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, d[110];

int Big(int* , int);

int main() {

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &d[i]);
	}

	printf("%d", Big(d, n));

	return 0;
}

int Big(int* d, int n) {

	int result_1 = 0, result_2 = 0;

	for (int i = 0; i <= n; i++)
	{
		if (d[i] > result_1)
		{
			result_1 = d[i];
			
			result_2 = i;
		}
	}
	
	return result_2 + 1;
}
