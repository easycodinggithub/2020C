#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int arr[100];
	int big_num = 0;
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d �� �л��� ��C ���� : ", i + 1);
		scanf("%d", &arr[i]);
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] >= big_num)
		{
			big_num = arr[i];
		}
	}

	printf("�ְ� ���� : %d", big_num);

	return 0;
}