#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	int Count, Human, Computer, Win = 0, Same = 0, Lose = 0;

	srand((unsigned int)time(NULL));

	printf("���������� ������ �� �� �����Ͻðڽ��ϱ�?");

	scanf("%d", &Count);

	for (int i = 0; i < Count; i++)
	{
		printf("(1:����, 2:����,3:��) : ");

		scanf("%d", &Human);

		Computer = rand() % 3 + 1;

		printf("%d %d \n", Human, Computer);

		if (Human - Computer == 1 || Human - Computer == -2)
		{
			Win++;
			printf("����� �̰���ϴ�. (%d�� %d�� %d��) \n", Win, Same, Lose);
		}
		else if (Human - Computer == -1 || Human - Computer == 2)
		{
			Lose++;
			printf("����� �����ϴ�. (%d�� %d�� %d��) \n", Win, Same, Lose);
		}
		else {
			Same++;
			printf("�����ϴ�. (%d�� %d�� %d��) \n", Win, Same, Lose);
		}
	}

	printf("������ �����մϴ�.");
	return 0;
}