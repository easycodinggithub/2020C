#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void BubbleSort(int arr[], int len);

// ���� ���� �Լ�

int main() {

	int arr[5] = { 4, 6, 1, 3, 9 };

	// ������ ���ڵ��� �迭

	/*printf("%d", arr);*/

	BubbleSort(arr, 5);

	// ù ��° ���ڷ� �迭�� �ּ� ����, �� ��° ���ڷ� �迭�� ũ�� ���� ( 5 )

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	// ���ĵ� �� ���

	return 0;
}

void BubbleSort(int* arr, int len) {

	// int* arr = int arr[]

	int temp;

	// swap �� �ʿ��� �ӽ� ����

	for (int i = 0; i < len - 1; i++)
	{
		// len �� 5�̸� �� 0, 1, 2, 3 ���� ����.

		for (int j = 0; j < len - i - 1; j++)
		{
			// len - 1 �� len - i - 1 �� �ٸ���

			// ȿ������ ����

			// len - 1�� �� 16�� �񱳸� ������ 

			// len - i - 1 �� 0, 1, 2, 3 -> 0, 1, 2 -> 0, 1 -> 0 ���� �� 10�� �񱳸� �Ѵ�.

			if (arr[j] > arr[j + 1])
			{
				// �������� ����

				temp = arr[j];

				// �ӽ� ������ ���� �迭�� ����

				arr[j] = arr[j + 1];

				// �׳� arr[j] �� arr[j + 1]�� ������ arr[j + 1]�� ���������� arr[j] ������ �̵�

				// arr[j] �� temp�� ������־� ����� ����.

				arr[j + 1] = temp;

				// temp ( arr[j] ) �� arr[j + 1] �� �̵�
			}
			/*if (arr[j] < arr[j + 1])
			{

				// �������� ����

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}*/
		}
	}
}