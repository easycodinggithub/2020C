#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int arr[100];
	int big_num = 0;
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d 번 학생의 프C 성적 : ", i + 1);
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

	printf("최고 점수 : %d", big_num);

	return 0;
}