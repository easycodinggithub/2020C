#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void selectionSort(int*, int);

// ���� ���� �Լ� ����

void printArr(int*, int);

// �迭 ���

int main() {
	int value[] = { 4, 7, 9, 11, 3, 7, 6 };

	// ������ �迭

	int n = sizeof(value) / sizeof(int);

	// int value[7] ������ 7 * 4 = 28

	// int �� ������� 4������
	
	// 28 / 4 = 7 

	printArr(value, n);
	
	// ���ĵ��� ���� �迭 ���

	selectionSort(value, n);
	
	// �迭 ����

	printArr(value, n);

	// ���ĵ� �迭 ���

	return 0;
}

void selectionSort(int* value, int n){

	int min = 0, temp = 0;

	for (int i = 0; i < n - 1; i++)
	{
		// n - 1�� �� �ұ�?

		// 2�� 3�� ���Ҷ��� 1���� ���Ѵ�.

		// 1 ȥ�ڸ� ���� ���� 0�� ���Ѵ�.

		// 4, 7, 9, 11, 3, 7, 6 �� �� �Ϸ��� 6�� �� 0 ~ 5����

		min = i;

		// 0, 1, 2, 3, 4, 5 ������ ����

		for (int j = i + 1; j < n; j++)
		{
			if (value[min] > value[j])
			{
				// ���� ���ڰ� ������ ���� �ϳ����� ũ�ٸ�

				min = j;

				// ���� ���ں��� ���� j �� min �� �ȴ�.
			}
		}

		temp = value[i];
		value[i] = value[min];
		value[min] = temp;

		// ���� ���ڶ� min ���ڶ� ��ȯ
	}
}

void printArr(int* value, int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%3d", value[i]);
	}
	printf("\n");
}

// ���� ���� VS ���� ����

// ���������� 1, 2, 3 �� ���� �� 1 VS 2, 1 VS 3, 2 VS 3 ���� ���Ѵ�.

// ���������� 1, 2, 3 �� ���� �� 1 VS 2, 2 VS 3, 1 VS 2 ���� ���Ѵ�.
