#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void submit(int*, int*);
int main() {
	int arr_1[5] = { 0, 1, 2, 3, 4 };
	int arr_2[5] = { 4, 3, 2, 1, 0 };

	int* p_1 = arr_1;
	int* p_2 = arr_2;
	
	printf("�Է��� arr_1 �迭�� �� : ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr_1[i]);
	}
	printf("\n");

	printf("�Է��� arr_2 �迭�� �� : ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr_2[i]);
	}
	printf("\n");

	submit(p_1, p_2);

	printf("�Է��� arr_1 �迭�� �� : ");

		for (int i = 0; i < 5; i++)
		{
			printf("%d ", arr_1[i]);
		}
		printf("\n");

		printf("�Է��� arr_2 �迭�� �� : ");

		for (int i = 0; i < 5; i++)
		{
			printf("%d ", arr_2[i]);
		}
		printf("\n");

	return 0;
}
void submit(int* n_1, int* n_2) {
	int temp;
	for (int i = 0; i < 5; i++)
	{
		temp = 0;
		temp = n_1[i];
		n_1[i] = n_2[i];
		n_2[i] = temp;
	}
}
