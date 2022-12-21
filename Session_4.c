#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 0;
	char str[20];
	scanf("%s", str);
	while (str[i] != '\0')
	{
		printf("%c", str[i++]);
	}

	return 0;
}