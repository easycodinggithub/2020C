#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char Word[100];

	int max;

	scanf("%s", Word);

	max = strlen(Word);

	for (char j = 'z'; j >= 'a'; j--)
	{
		for (int i = 0; i < max; i++)
		{
			if (Word[i] == j)
			{
				printf("%c", Word[i]);
				exit(0);
			}
		}
	}

	return 0;
}