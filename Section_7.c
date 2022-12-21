#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char Word[30];
	int fix_1;
	char fix_2;

	printf("蟾晦高 : ");

	scanf("%s", Word);

	while (1)
	{
		printf("熱薑 �騆� 檣策蝶 : ");

		scanf("%d", &fix_1);

		printf("熱薑 高 : ");

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