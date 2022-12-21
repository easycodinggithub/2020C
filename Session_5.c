#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int strlen_2(char* str);
int main() {

	char str[100];
	int width = 0;
	scanf("%s", str);
	
	width = strlen_2(str);

	// width = strlen(str);

	for (int i = width - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}
int strlen_2(char* str) {
	int len = 0;
	for (int i = 0; i < str[i] != 0; i++)
	{
		len++;
	}
	return len;
}
