#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int arr[4] = { 1, 2, 3, 4 };
	int* pArr;
	int n;
	scanf("%d", &n);
	printf("%lu \n", sizeof(pArr));
	pArr = (int*)malloc(sizeof(int) * n);
	if (pArr == NULL)
	{
		printf("메모리 공간 부족 \n");
		exit(0);
	}
	for (int i = 0; i < n; i++)
	{
		pArr[i] = i * i;
		printf("pArr[i] = %d \n", pArr[i]);
	}
	free(pArr);
	return 0;
}