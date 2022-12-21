#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

	char str[100];
	int i = 0;
	scanf("%s", str);
	while (str[i] != '\0') {
		i++;
	}
	for (i--; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}