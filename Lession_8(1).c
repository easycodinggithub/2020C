#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

	int arr[100];

	int n;

	double avg = 0;

	int sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	
	avg = sum / 3.0;

	printf("ЦђБе : %.2lf", avg);

	return 0;
}