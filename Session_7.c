#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

	char str[100], str1[100];
	int i = 0;
	/*scanf("%s %s", str, str1);
	printf("%s %s\n", str, str1);*/

	scanf("%[^\n]", str);
	printf("%s\n", str);

	return 0;
}