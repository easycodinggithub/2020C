#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a, b;

	scanf("%c", &b);

	while (1)
	{
		if (b == 10)
		{
			break;
		}

		scanf("%c", &a);

		if (a == 10)
		{
			printf("Hello");
		}

		if (a != 10)
		{
			break;
		}
	}
	return 0;
}