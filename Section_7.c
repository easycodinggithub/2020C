#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char Word[30];
	int fix_1;
	char fix_2;

	printf("�ʱⰪ : ");

	scanf("%s", Word);

	while (1)
	{
		printf("���� ��� �ε��� : ");

		scanf("%d", &fix_1);

		printf("���� �� : ");

		scanf(" %c", &fix_2);

		for (int i = 0; i < 30; i++)
		{
			if (i == fix_1 - 1)
			{
				Word[i] = fix_2;
				break;
			}
		}

		printf("%s\n\n\n", Word);
	}

	return 0;
}